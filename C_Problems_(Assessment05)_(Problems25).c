#include<stdio.h>
int main()
{
    int a,d,count=0;
    printf("Enter the num :");
    scanf("%d",&a);
    for(;a>0;a/=10)
    {
        d = a % 10;
        if((d==2)||(d==3)||(d==5)||(d==7))
        {
            count++;
        }
    }
    printf("%d",count);
}
