#include<stdio.h>
int main()
{
    int a,b,c,lcm;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    for(lcm=((a<b)?a:b)||(a<c)?a:c; ;lcm++)
    {
        if((lcm%a==0) && (lcm%b==0) && (lcm%c == 0))
        {
            printf("%d",lcm);
            goto end;
        }
    }
    end:
}
