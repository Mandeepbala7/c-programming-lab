#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>c)
    {
        if(a<c)
        {
            printf("the greatest is=%d",a);
        }
        else
        {
            printf("the greatest is=%d",c);
        }
        
    }
    else
    {
        if(b>c)
        {
            printf("the greatest is=%d",b);
        }
        else
        {
            printf("the greatest is=%d",c);
        }
    }
}