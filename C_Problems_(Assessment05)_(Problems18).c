#include <stdio.h>
int main()
{
    int n,i,d;
    scanf("%d",&n);
    if(n<0)
    {
        printf("Not Prime");
        goto end;
    }
    d = n % 100;
    for(i=2;i<d;i++)
    {
        if(d % i == 0)
        {
            printf("Not prime");
            goto end;
        }
    }
    printf("Prime");
    end:
    return 0;
}
