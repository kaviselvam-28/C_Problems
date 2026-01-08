#include<stdio.h>
int main()
{
    int x,rev;
    printf("Enter the num :");
    scanf("%d",&x);
    for(rev=0;x>0;)
    {
        rev=(rev*10)+(x%10);
        x=x/10;
    }
    printf("%d",rev);
}
