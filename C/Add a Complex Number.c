#include <stdio.h>
typedef struct complex 
{
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);
complex multiply(complex n1, complex n2);

int main() 
{
    complex n1, n2, result,resultz;
	printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);
	result = add(n1, n2);
	resultz = multiply(n1, n2);
	printf("\nSum = %.1f + %.1fi", result.real, result.imag);
	printf("\nMultiply = %.1f + %.1fi", resultz.real, resultz.imag);
    return 0;
}

complex add(complex n1, complex n2) 
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}

complex multiply(complex n1, complex n2)
{
    complex tempz;
    tempz.real = n1.real * n2.real - n1.imag * n2.imag;
    tempz.imag = n1.real * n2.imag + n1.imag * n2.real;
    return (tempz);
}
