#include<stdio.h>
void disp_rsum(int);
int main ()
{
    int x,y;
    scanf("%d",&x);
    disp_rsum(x);
}
void disp_rsum(int x) 
{
    int i,sum=0;
    i=x;
    for (;i>=1;i--)
    {
        sum=sum+i;
    }
    printf ("%d",sum);
}