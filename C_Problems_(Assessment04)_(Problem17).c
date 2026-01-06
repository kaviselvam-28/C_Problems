#include <stdio.h>
int main()
{
    int x,a;
    a=2;
    printf("Enter the num :");
    scanf("%d",&x);
    if(x<0)
    {
        printf("Not prime");
        goto last;
    }
    loop:if(a<x){
        if(x%a ==0)
    {
        printf("Not prime");
        goto last;
    }
    a++;
    goto loop;
  }
    printf("Prime");
    last:return 0;
}
