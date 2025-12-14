#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the num:");
    scanf("%d",&a);
    b=a/100;
    c=(a%100)/10;
    d=a%10;
    e=b+c+d;
    printf("Result=%d",e);
}