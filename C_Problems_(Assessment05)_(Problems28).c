#include<stdio.h>
int main()
{
    int a,b,lcm;
    scanf("%d",&a);
    scanf("%d",&b);
    for(lcm=(a<b)?a:b; ;lcm++)
    {
        if((lcm%a==0) && (lcm%b==0))
        {
            printf("%d",lcm);
            goto end;
        }
    }
    end:
}
