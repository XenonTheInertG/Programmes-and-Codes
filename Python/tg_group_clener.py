from telethon import TelegramClient
from telethon.tl.functions.channels import EditBannedRequest
from telethon.tl.types import ChatBannedRights
import asyncio
import datetime

api_id = 1234 # Your API_ID
api_hash = "1a2b3c456" # Your APP_ID


async def clear_chat(client):
    group = input("Enter the group username where the script should search for deleted accounts: ")
    deleted_accounts = 0
    async for user in client.iter_participants(group):
        if user.deleted:
            try:
                deleted_accounts += 1
                await client(EditBannedRequest(group, user, ChatBannedRights(
                   until_date=datetime.timedelta(minutes=1),
                   view_messages=True
                   )))
            except Exception as exc:
                print(f"Failed to kick one deleted account because: {str(exc)}")
    if deleted_accounts:
        print(f"Kicked {deleted_accounts} Deleted Accounts")
    else:
        print(f"No deleted accounts found in {group}")

with TelegramClient("deleteacc", api_id, api_hash) as client:
    asyncio.get_event_loop().run_until_complete(clear_chat(client))
