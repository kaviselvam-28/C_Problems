#include<stdio.h>
void disp_2digit_odd_sum_tens7(int);
int main ()
{ 
    int x,y;
    scanf ("%d",&x);
    disp_2digit_odd_sum_tens7(x);
}
void disp_2digit_odd_sum_tens7 (int x)
{
    int i, tens , sum =0;
    i=x;
    for(; i<99; i++ )
    {
        tens=i/10;
        if((tens==7)&&(i%2!=0))
        {
            sum=sum+i;
        }
    }
    printf ("%d",sum);
    
}