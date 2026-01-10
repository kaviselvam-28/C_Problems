#include<stdio.h>
int main()
{
    int a,d,count=0;
    printf("Enter the num :");
    scanf("%d",&a);
    for(;a>10;a/=10)
    {
        d = a % 100;
        if((d==16)||(d==25)||(d==36)||(d==49)||(d==64)||(d==81))
        {
            count++;
        }
    }
    printf("%d",count);
}
