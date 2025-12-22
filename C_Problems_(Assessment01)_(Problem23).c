#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=b+c;
    e=a-(d % 2 !=0)*5;
    printf("%d",e);
}