#include<stdio.h>

int main(){
    int a,b;
    printf("enter first number A:");
    scanf("%d",&a);
    printf("enter second number B:");
    scanf("%d", &b);

    int sum=a + b ;
    printf("sum of two number is=%d",sum);
    int product = a * b ;
    printf("\n product of two number is=%d",product);
    return 0;
}