#include<stdio.h>
int main(){
    int a,b;

    printf("enter first number");
    scanf("%d",&a);

    printf("enter secound number");
    scanf("%d",&b);

    printf("before swaping a= %d b=%d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swaping a=%d b=%d",a,b);

    return 0;
}