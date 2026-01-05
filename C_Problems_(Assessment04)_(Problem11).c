#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter the num:");
    scanf("%d",&x);
    loop:if(x>0)
    {
        count=count+1;
        x/=10;
        goto loop;
    }
    
    printf("%d",count);
}
