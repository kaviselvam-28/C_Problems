#include <stdio.h>
int main()
{
    int x,temp,a=1,first,middle,last,result=0;
    printf("Enter the num :");
    scanf("%d",&x);
    temp=x;
    last=x%10;
    loop:if(temp>= 10)
    {
        temp=temp/10;
        a=a*10;
        goto loop;
    }
    first=temp;
    middle=(x%a)/10;
    last=last*a;
    result=last+(middle*10)+first;
    printf("%d",result);
}
