#include <stdio.h>
int main()
{

    int arr[100], num,j,i;
    printf("Enter the size of an array \n");
    scanf("%d", &num);
    printf("Enter the elements of the array \n");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Odd numbers in the array are:");
    for (j = 0; j < num; j++)
    {
        if (arr[j] % 2 != 0)
        {
            printf("%d\t", arr[j]);
        }
    }
    return 0;
}
