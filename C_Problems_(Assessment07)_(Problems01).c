#include<stdio.h>
void disp_descend(int);
int main ()
{
    int x,y;
    scanf("%d",&x);
    disp_descend(x);
}
void disp_descend(int x) 
{
    int i;
    i=x;
    for (;i<=5;i++)
    {
        printf ("%d\n",i);
    }