#include<stdio.h>
void disp_2digit_odd_below20(int);
int main ()
{ 
    int x,y;
    scanf ("%d",&x);
    disp_2digit_odd_below20(x);
}
void disp_2digit_odd_below20 (int x)
{
    int i;
    i=x;
    for(; i<=20; i++ )
    {
        if(i%2!=0)
        {
            printf ("%d\n",i);
        }
    }
}