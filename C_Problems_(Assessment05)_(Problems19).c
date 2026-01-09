#include <stdio.h>
int main()
{
    int n,i,d,e;
    printf("Enter the num :" );
    scanf("%d",&n);
    if(n<0)
    {
        printf("Not Prime");
        goto end;
    }
    d = (n % 1000)/100;
    e = ((n%1000)%100)/10;
    for(i=2;i<d;i++)
    {
        for(i=2;i<e;i++)
        {
            if((d % i == 0)  &&  ( e % i == 0))
            {
                printf("Not prime");
                goto end;
            }
        }
    printf("Prime");
    end:
    return 0;
    }
}
