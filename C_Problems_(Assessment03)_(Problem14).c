#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the num:");
    scanf("%d",&a);
    b=(a%100);
    c=(a/100);
    
    if(c==b)
        printf("success");
    else
        printf("Failure");
}
