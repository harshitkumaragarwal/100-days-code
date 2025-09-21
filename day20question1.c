#include<stdio.h>
int main(){

    int i,num,product=1;

    printf("enter the number num");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        if(num%2!=0){
            product=product*i;
        }
    }
    printf("the product is %d",product);

    return 0;
}