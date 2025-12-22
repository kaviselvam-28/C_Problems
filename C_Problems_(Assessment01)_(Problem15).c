#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,Result;
    printf("Enter the num:");
    scanf("%d",&a);
    b=a%10;
    c=(a%1000)%100/10;
    d=(b*10)+c;
    e=a/1000;
    f=(a%1000)/100;
    g=(e*1000)+(f*100)+d;
    printf("Result:%d",g);
}