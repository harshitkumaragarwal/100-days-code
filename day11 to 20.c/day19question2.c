#include<stdio.h>
int main(){

    int i,num,sum=0;

    printf("enter the number num");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        sum=sum+i;

    }
    printf("the sum of number %d",sum);

    return 0;
}