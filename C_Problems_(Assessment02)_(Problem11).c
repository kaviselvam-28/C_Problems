#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the num :");
    scanf("%d",&a);
    b=a%10 ;
    c=a/10;
    d=(c<=b);
    printf("%d",d);
}

