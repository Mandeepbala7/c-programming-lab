#include<stdio.h>
void main()
{
    int num ,i;
    unsigned long long factorial=1;
    printf("enter a postive integer:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("error:factorial is not defined for negtive number");
    }
    else
    {
        for(i=1;i<=num;i++)
        {
            factorial*=i;
        }
        printf("factorial of %d=%u\n",num,factorial);
    }
}