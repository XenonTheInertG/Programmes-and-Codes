/*Write an algorithm to determine if an input string is of the form :xCy
* Where y is the reverse of x and x & y are strings of A and B.
* Example: AABACABAA. */

#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], x[100], y[100];
    int i, c = 0, l = 0, j = 0;
    printf("\nEnter a string:");
    gets(s);
    while (s[c] != 'C')
    {
        c++;
    }
    while (s[l] != '\0')
    {
        l++;
    }
    for (i = 0; i < c; i++)
    {
        x[i] = s[i];
    }
    printf("\nA=");
    puts(x);
    for (i = c + 1; i != l; i++)
    {
        y[j] = s[i];
        j++;
    }
    printf("\nB=");
    puts(y);
    strrev(y);
    printf("\nReverse of B=");
    puts(y);
    if (strcmp(x, y) == 0)
    {
        printf("\n They are in xCy form.");
    }
    else
    {
        printf("\n They are not in xCy form.");
    }
    return 0;
}
