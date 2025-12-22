#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,Result;
    printf("Enter the num:");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    e=a/1000;
    f=(a%1000)/100;
    g=(f*1000)+(e*100)+(c*10)+b;
    printf("Result:%d",g);
}