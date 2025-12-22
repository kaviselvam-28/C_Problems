#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a%10;
    c=a/100;
    e=a-(c % 2 !=0)*( b % 2!=0)*5;
    printf("%d",e);
}