#include <stdio.h>
int main()
{
    int n, arr[n], i, ele, pos;
    printf("\n Enter the numbers in the array to be inserted:");
    scanf("%d", &n);
    for (i = 0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the position to be inserted:");
    scanf("%d", &pos);
    printf("\n Enter the element to be inserted:");
    scanf("%d", &ele);
    if (pos>n)
    {
        printf("Invalid Input");
    }
    else
    {
        for(i= n-1;i>=pos-1;i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = ele;
        printf("Array after insertion is:\n");
        for (i=0; i<=n;i++)
        {
            printf("%d\n",arr[i]);
        }
    }

    return 0;
}
