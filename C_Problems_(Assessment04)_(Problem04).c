#include<stdio.h>
int main()
{
    int x,sum;
    x=6;
    sum=0;
    Loop:if(x>=1)
    {
        sum=sum+x;
        x=x-1;
        goto Loop;
    }
  
    printf("%d",sum);
}
