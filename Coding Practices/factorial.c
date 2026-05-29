#include <stdio.h>
void main()
{
    int i,n=4,fact=1;
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("Factorial is %d ",fact);
}
