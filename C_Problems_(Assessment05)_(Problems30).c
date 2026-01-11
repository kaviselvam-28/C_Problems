#include<stdio.h>
int main()
{
    int a,b,i,Hcf=1;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;(i<=a)&&(i<=b);i++)
    {
        if((i%a == 0) && (i%b == 0))
        {
            Hcf=i;
        }
    }
    printf("%d",Hcf);
}
