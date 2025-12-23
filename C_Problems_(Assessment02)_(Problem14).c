#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    printf("Enter the num :");
    scanf("%d",&a);
    b=a%10 ;
    c=(a%1000)%100/10;
    d=(c*10)+b;
    e=a/1000;
    f=(a%1000)/100;
    g=(e*10)+f;
    h=(g == d);
    printf("%d",h);
}
