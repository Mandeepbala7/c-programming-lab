#include<stdio.h>
void main()
{
    int i,n;
    int a=0,b=1;
    int nextterm=a+b;
    printf("enter number of terms");
    scanf("%d",&n);
    printf("fibnacci serius:\t\n%d%d",a,b);
    for(i=3;i<=n;i++)
    {
        printf("%d\n",nextterm);
        a=b;
        b=nextterm;
        nextterm=a+b;
    }
}