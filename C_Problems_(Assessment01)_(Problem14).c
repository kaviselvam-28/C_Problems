#include<stdio.h>
int main()
{
    int a,b,c,d,e,Result;
    printf("Enter the num:");
    scanf("%d",&a);
    b=a/100;
    c=(a%100)/10;
    d=a%10;
    e=(d*100)+(c*10)+b;
    printf("Result:%d",e);
}