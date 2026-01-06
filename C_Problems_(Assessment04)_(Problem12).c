#include <stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter the num :");
    scanf("%d",&x);
    loop:if(x>0)
    {
        sum=sum+(x%10);
        x=x/10;
        goto loop;
    }
    printf("%d",sum);
}
