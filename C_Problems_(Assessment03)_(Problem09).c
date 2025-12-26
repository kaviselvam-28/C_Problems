#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the num:");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    if(b<c)
        printf("success");
    else
        printf("Failure");
}
