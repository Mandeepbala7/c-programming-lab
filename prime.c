#include<stdio.h>
void main()
{
    int num,c=0,i;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0&&num!=1)
    {
        printf("%d is prime number.\n",num);
    }
    else
    {
        printf("%d is not prime number\n",num);
    }
}