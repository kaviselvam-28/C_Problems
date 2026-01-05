#include<stdio.h>
int main()
{
    int x;
    x=1;
    Loop:if(x<=5)
    {
        printf("%d\n",x);
        x=x+1;
        goto Loop;
    }
}
