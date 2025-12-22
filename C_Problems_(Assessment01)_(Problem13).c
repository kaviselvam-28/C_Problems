#include<stdio.h>
int main()
{
    int a,b,c,d,Result;
    printf("Enter the num:");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=(b*10)+c;
    printf("Result:%d",d);
}