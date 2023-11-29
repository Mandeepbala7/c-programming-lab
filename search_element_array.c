#include<stdio.h>
void main()
{
    int arr[30];
    int num,ele,found=0,i;
    printf("enter the number of elements:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to search:");
    scanf("%d",&ele);
    for(i=0;i<num;i++)
    {
        if(arr[i]==ele)
        {
            printf("elements found at index %d elements:%d\n",ele);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("element not found in array");
    }
}