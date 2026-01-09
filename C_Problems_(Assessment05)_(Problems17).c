#include <stdio.h>

int main()
{
    int n, i,a,b,sum=0,flag = 0;
    printf("Enter the num :");
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    sum=a+b;
    if (n <= 1)
    {
        printf("Not prime ");
        return 0;
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            if(sum==14)
            {
                printf(" Not Prime & sum of digits is 14");
                return 0;
            }
            else
                printf(" Not Prime & sum of digits is not 14");
                return 0 ;
        }
    }
    if (flag == 0)
    {
      if(sum==14)
      {
        printf("Prime & sum of digits is 14");
      }
      else
      {
        printf("Prime & sum of digits is not 14");
      }
    }
    return 0;
}
