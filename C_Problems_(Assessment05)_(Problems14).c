#include<stdio.h>
int main()
{
    int x,temp,a=1,first,middle,last,result=0;
    printf("Enter the num :");
    scanf("%d",&x);
    last=x%10;
    for(temp=x;temp>=10;temp+1)
    {
        temp=temp/10;
        a=a*10;
    }
    first=temp;
    middle=(x%a)/10;
    last=last*a;
    result=last+(middle*10)+first;
    printf("%d",result);
}
