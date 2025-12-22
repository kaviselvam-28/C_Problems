#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,Result;
    printf("Enter the num:");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=(a%10)-b;
    e=(c*10)+d;
   
    printf("Result:%d",e);
}