#include<stdio.h>
int main()
{
    int x;
    x=5;
    Loop:if(x>=1)
    {
        printf("%d\n",x);
        x=x-1;
        goto Loop;
    }
}
