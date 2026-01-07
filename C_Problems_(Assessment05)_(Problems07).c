#include<stdio.h>
int main()
{
    int x,a,b,sum;
    sum=0;
    Loop:for(x=10;x<99;x++)
    {
        a=x%10;
        b=x/10;
        sum=a+b;
        if((sum==7) && (x%2 != 0))
        {
            printf("%d\n",x);
        }
    }
}
