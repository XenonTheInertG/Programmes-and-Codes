#include<stdio.h>
#define SWAP(x,y,temp) { temp=x; x=y; y=temp; }
int main()
{
    int a,b,temp;
    printf("\n Enter 1st variable(a):");
    scanf("%d",&a);
	printf("\n Enter 2nd variable(b):");
    scanf("%d",&b);
	SWAP(a,b,temp);
	printf("\n\n Swapped Values:");
    printf("\n a=%d, b=%d",a,b);
	return 0;
}
