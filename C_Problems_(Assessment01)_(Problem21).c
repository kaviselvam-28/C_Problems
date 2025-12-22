#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a-(a % 2 !=0)*5;
    printf("%d",b);
}