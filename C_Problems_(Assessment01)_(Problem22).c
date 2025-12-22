#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a/10;
    c=a-(b % 2 !=0)*5;
    printf("%d",c);
}