#include<stdio.h>
int main()
{
    int a,b,sum,count=0;
    for(a=10;a<100000;a++)
    {
      sum = 0;
      b = a;
      for(;b>0;b/=10)
      {
         sum= sum + (b % 10);
      }
      if(sum == 14)
      {
            count=count+1;
      }
    }
    printf("%d",count);
}
