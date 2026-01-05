#include<stdio.h>
int main()
{
    int x,a,b,sum;
    x=10;
    sum=0;
    Loop:if(x<99)
    {
        b=x/10;
        if((b == 7) && (x % 2 != 0))
        {
            sum=sum+x;
        }
        x++;
        goto Loop;
    }
    printf("%d\n",sum);
}
