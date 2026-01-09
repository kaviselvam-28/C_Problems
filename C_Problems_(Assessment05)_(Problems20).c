#include<stdio.h>
int main()
{
    int a,count=0;
    for(a=1;a<10;a++)
    {
        if((a==2) || (a==3) || (a==5) || (a==7))
        {
            count = count + 1;
        }
    }
    printf("%d",count);
}
