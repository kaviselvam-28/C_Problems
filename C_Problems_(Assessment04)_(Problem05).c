#include<stdio.h>
int main()
{
    int x;
    x=1;
    Loop:if(x<=9)
    {
         printf("%d\n",x);
        x=x+2;
        goto Loop;
    }
}
