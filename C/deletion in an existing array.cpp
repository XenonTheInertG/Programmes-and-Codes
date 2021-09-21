#include <stdio.h>
int main()
{
    int arr[100], position, c, n;
    printf("Enter the number of elements of the array:\n");
    scanf("%d",&n);
    printf("\nInput the array elements:\n");
    for (c=0;c<n;c++)
    {
        scanf("%d",&arr[c]);
    }
    printf("\n Enter the position:");
    scanf("%d",&position);
    if (position>=n+1)
    {
        printf("\nError");
    }
    else
    {
        for(c=position-1;c<n-1;c++)
        {
            arr[c]=arr[c+1];
        }
        printf("\nArray after deletion:\n");
        for (c=0;c<n-1;c++)
        {
            printf("%d\n",arr[c]);
        }
    }
    return 0;
}
