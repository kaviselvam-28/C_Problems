#include<stdio.h>
int main()
{
    int x,a,b,sum;
    x=10;
    sum=0;
    Loop:if(x<99)
    {
        a=x%10;
        b=x/10;
        sum=a+b;
        if((sum==6) && (x % 2 == 0))
        {
            printf("%d\n",x);
        }
        x++;
        goto Loop;
    }
}
