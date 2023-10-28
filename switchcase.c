#include<stdio.h>
#include<math.h>
void main()
{
    int area1,peri1,area2,peri2,area3,peri3;
    int c;
    printf("enter the choice");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        int r;
        printf("enter the radius of circle:");
        scanf("%d",&r);
        area1=3.14*r*r; 
        peri1=2*3.14*r;
        printf("area of circle=%d\n",area1);
        printf("perimeter of circle=%d\n",peri1);
        break;
        case 2:
        int s;
        printf("enter the side of square");
        scanf("%d",&s);
        area2=s*s;
        peri2=4*s;
        printf("area of square=%d\n",area2);
        printf("perimeter of square=%d\n",peri2);
        break;
        case 3:
        int l,b;
        printf("enter the length and breadthof rectangle");
        scanf("%d%d",&l,&b);
        area3=l*b;
        peri3=2*(l+b);
        printf("area of rectangle=%d\n",area3);
        printf("perimeter of rectangle=%d\n",peri3);
        break;
        default:
        printf("invalid");
    }
}