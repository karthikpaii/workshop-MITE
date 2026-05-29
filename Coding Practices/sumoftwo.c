int main() {
    // Write C code here
    int a=10,b=20;
    int sum=a+b;
    printf("Sum is %d ",sum);

    return 0;
}


//version 2

#include <stdio.h>

void add(int a,int b) 
{
    int sum=a+b;
    printf("Sum is %d ",sum);
}
int main()
{
    add(10,20);
    return 0;
}
