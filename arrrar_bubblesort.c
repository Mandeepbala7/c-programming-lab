#include<stdio.h>
void bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+i])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={5,3,2,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    printf("sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}