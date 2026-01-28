#include<stdio.h>
void disp_2digit_odd_sum7(int);
int main ()
{ 
    int x,y;
    scanf ("%d",&x);
    disp_2digit_odd_sum7(x);
}
void disp_2digit_odd_sum7 (int x)
{
    int i, y, z, sum =0;
    i=x;
    for(; i<=99; i++ )
    {
        y=i%10;
        z=i/10;
        sum=y+z;
        if((i%2!=0)&&(sum==7))
        {
            printf ("%d\n",i);
        }
    }
}