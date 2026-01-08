#include<stdio.h>
int main()
{
    int x,temp,a=1,first,middle,last,result=0;
    printf("Enter the num :");
    scanf("%d",&x);
    last=x%10;
    for(temp=x;temp>=10;temp++)
    {
        temp=temp/10;
        a=a*10;
    }
    first=temp;
    if(first %2 == 0)
    {
        result=x-a;
        goto print;
    }
    if(first %2 != 0)
    {
        result=x;
        goto print;
    }
    print:
    printf("%d",result);
}
