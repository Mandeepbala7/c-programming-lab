#include<stdio.h>
int fact(int);
void main()
{
    int a,fact1;
    printf("enter the number to calculate factorial:");
    scanf("%d",&a);
    fact1=fact(a);
    printf("factorial of %d is %d",a,fact1);
}
int fact(int x)
{
    if(x<1)
    return 1;
else
return x*fact(x-1);
}