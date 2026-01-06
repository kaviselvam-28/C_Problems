#include <stdio.h>
int main()
{
    int x,rev=0;
    printf("Enter the num :");
    scanf("%d",&x);
    loop:if(x>0)
    {
        rev=(rev*10)+(x%10);
        x=x/10;
        goto loop;
    }
    printf("%d",rev);
}
