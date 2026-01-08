#include<stdio.h>
int main()
{
    int x,a,sum=0;
    for(x=10;x<99;x++)
    {
        a=x/10;
        if((a==7) && (x%2 != 0))
        {
            sum=sum+x;
         }
    }
    printf("%d",sum);
}
