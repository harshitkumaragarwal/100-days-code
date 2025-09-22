#include<stdio.h>
int main(){

    int i,rem,rev=0,num;

    printf("enter the number num");
    scanf("%d",&num);

    while(num !=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    printf("%d",rev);

    return 0;
}