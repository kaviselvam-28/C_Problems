#include <stdio.h>
int main()
{
    int x,temp,a=1,first,result=0;
    printf("Enter the num :");
    scanf("%d",&x);
    temp=x;
    loop:if(temp>= 10)
    {
        temp=temp/10;
        a=a*10;
        goto loop;
    }
    first=temp;
    if(first % 2 != 0)
    {
        result=x-a;
        goto print;
    }
     if(first % 2 == 0)
    {
        result=x;
        goto print;
    }
    print:
    printf("%d",result);
}
