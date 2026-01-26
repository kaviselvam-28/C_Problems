#include<stdio.h>
void disp_sum(int);
int main ()
{
    int x,y;
    scanf("%d",&x);
    disp_sum(x);
}
void disp_sum(int x) 
{
    int i,sum=0;
    i=x;
    for (;i<=5;i++)
    {
        sum=sum+i;
    }
    printf ("%d",sum);
}