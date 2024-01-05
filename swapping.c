#include<stdio.h>

int main(){
    int a , b, c;

    printf("Enter the value of A and B : ");

    scanf("%d %d", &a, &b);

    //printf("BEfore Swapping  %d\n", );



    c = b;
    b = a;
    a = c;


    printf("new a is :%d\n", a );
    printf("new b is :%d" , b );

    return 0;

    


}