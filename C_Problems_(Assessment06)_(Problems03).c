#include<stdio.h>
int main ()
{
    int a,sum=0;
    a=1;
    while(a<=5)
    {
        sum=sum+a;
        a++;
    }
    printf("%d",sum);
}