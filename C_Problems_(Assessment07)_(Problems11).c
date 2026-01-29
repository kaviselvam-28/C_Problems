#include<stdio.h>
void count_total_digits(int);
int main ()
{ 
    int x,y;
    scanf ("%d",&x);
    count_total_digits (x);
}
void count_total_digits (int x)
{
    int i, count=0;
    i=x;
    for(; i!=0; i/=10 )
    {
        count=count+1;
    }
            printf ("%d",count);
}