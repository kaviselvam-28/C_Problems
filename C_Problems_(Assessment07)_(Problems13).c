#include<stdio.h>
void disp_reverse_number (int);
int main ()
{ 
    int x,y;
    scanf ("%d",&x);
    disp_reverse_number (x);
}
void disp_reverse_number (int x)
{
    int i, rev;
    i=x;
    for(rev=0; i>0 ;)
    {
        rev=(rev*10)+(i%10);
        i=i/10;
    }
            printf ("%d",rev);
}