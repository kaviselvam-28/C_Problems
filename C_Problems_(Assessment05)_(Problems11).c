#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter the num :");
    scanf("%d",&x);
    for( ; x!=0 ; x=x/10)
    {
        count++;
    }
    printf("%d",count);
}
