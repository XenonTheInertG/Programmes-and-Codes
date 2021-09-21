#!/usr/bin/env python3

from getpass import getpass


def get_password():
    # getpass() is a function that hide the input
    password = getpass("Enter password: ")
    re_enter_password = getpass("Re-enter password: ")
    return password, re_enter_password


def check_password():
    password, re_enter_password = get_password()
    if password == re_enter_password:
        print("Succefully logged in.")
    else:
        print("Password is incorrect.")


check_password()
