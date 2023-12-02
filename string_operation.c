#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20],str3[20];
    int res;
    printf("enter the string 1:\n");
    scanf("%s",&str1);
    printf("enter the string 2:\n");
    scanf("%s",&str2);
    printf("concentination string is %s\n",strcat(str1,str2));
    res=strcmp(str1,str2);
    printf("compare string result is %d\n",res);
    strcpy(str3,str2);
    printf("first string is %s\n",str1);
    printf("second string is %s\n",str2);
    printf("third string lowercase is %s\n",strlwr(str3));
    printf("third string upper case is %s\n",strupr(str3));
}