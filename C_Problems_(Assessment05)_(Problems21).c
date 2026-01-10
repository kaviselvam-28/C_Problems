#include<stdio.h>
int main()
{
    int a,d,count=0;
    printf("Enter the num :");
    scanf("%d",&a);
    for(;a>0;a/=10)
    {
        d = a % 10;
        if(d % 2 != 0)
        {
            count++;
        }
    }
    printf("%d",count);
}
