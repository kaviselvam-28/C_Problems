#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter the num :");
    scanf("%d",&x);
    for(;x!=0 ; x=x/10)
    {
        sum=sum+(x%10);
    }
    printf("%d",sum);
}
