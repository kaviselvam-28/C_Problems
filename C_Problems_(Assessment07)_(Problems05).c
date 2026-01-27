#include<stdio.h>
void disp_odd(int);
int main ()
{ 
    int x,y;
    scanf ("%d",&x);
    disp_odd(x);
}
void disp_odd (int x)
{
    int i;
    i=x;
    for(; i<=9; i++ )
    {
        if(i%2!=0)
        {
            printf ("%d\n",i);
        }
    }
}