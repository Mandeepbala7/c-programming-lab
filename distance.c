#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d;
    printf("enter the points");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    float distance=sqrt(pow((c-a),2)+pow((d-b),2));
    printf("enter the diastance=%f",distance);
}