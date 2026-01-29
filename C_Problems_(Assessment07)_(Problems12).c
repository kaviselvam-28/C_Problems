#include<stdio.h>
void disp_sum_all_digit (int);
int main ()
{ 
    int x,y;
    scanf ("%d",&x);
    disp_sum_all_digit (x);
}
void disp_sum_all_digit (int x)
{
    int i, sum=0;
    i=x;
    for(; i!=0; i/=10 )
    {
        sum=sum+(i%10);
    }
            printf ("%d",sum);
}