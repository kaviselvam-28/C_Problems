#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a%10;
    c=(a%100)/10;
    d=a/100;
    e=b+c+d;
    sum=(e<10)? e:(e%10)+(e/10);
    printf("%d",sum);
}