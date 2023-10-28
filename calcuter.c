#include<stdio.h>
void main()
{
    int a,b,c;
    int choice;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    printf("1 for addition\n 2 for subtraction\n 3 for division\n 4 for multiplication\n");
    printf("enter your choice");
    scanf("%d",&choice);

    if(choice==1)
    {
        c=a+b;
        printf("enter the addtion=%d",c);
    }
    else if(choice==2)
    {
        c=a-b;
        printf("enter the subtration=%d",c);
    }
    else if(choice==3)
    {
        c=a/b;
        printf("enter the division=%d",c);
    }
    else if(choice==4)
    {
        c=a*b;
        printf("enter the multiplication=%d",c);
    }
}