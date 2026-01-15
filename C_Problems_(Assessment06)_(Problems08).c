#include<stdio.h>
int main ()
{
    int a,b,c,sum=0;
    a=10;
    while(a<=99)
    {
        b=a%10;
        c=a/10;
        sum=b+c;
        if((a%2 == 0) && (sum==6))
        {
            printf("%d\n",a);
        }
        a++;
    }
}