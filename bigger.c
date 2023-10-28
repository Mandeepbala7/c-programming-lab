#include<stdio.h>
int main()
{
    int n,i;
    float num,maximum;
    //get the number of elements from user
    printf("enter the no of elements");
    scanf("%d",&n);
    //intilise the maxiumum value to be smallest
    maximum=-999999999;
    for(i=0;i<n;++i)
    {
        printf("enter the number:");
        scanf("%f",&num);
        if(num>maximum)
        {
            maximum=num;
        }
        
        printf("maximum number is=%.2f\n",maximum);
        return 0;
    }
}