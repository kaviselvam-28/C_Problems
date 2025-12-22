#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,Result;
    printf("Enter the num:");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    c=1;
    e=(c*10)+b;
    printf("Result:%d",e);
}