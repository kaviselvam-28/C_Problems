#include<stdio.h>
void disp_2digit_ones5(int);
int main ()
{ 
    int x,y;
    scanf ("%d",&x);
    disp_2digit_ones5(x);
}
void disp_2digit_ones5 (int x)
{
    int i, ones , sum =0;
    i=x;
    for(; i<99; i++ )
    {
        ones=i%10;
        if(ones==5)
        {
            sum=sum+i;
        }
    }
    printf ("%d",sum);
    
}