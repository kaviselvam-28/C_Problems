#include<stdio.h>
int main ()
{
    int a;
    a=1;
    while(a<=9)
    {
        if(a%2 != 0)
        {
            printf("%d\n",a);
        }
        a++;
    }
}