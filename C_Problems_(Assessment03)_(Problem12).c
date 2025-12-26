#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the num:");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    if(c>=b)
        printf("success");
    else
        printf("Failure");
}
