#include<stdio.h>
int main(){
    int rev=0,rem,i,num;

    printf("enter the number num");
    scanf("%d",&num);

    while(num!=0){
         rem = num % 10;  
        rev = rev * 10 + rem;   
        num = num / 10;
    }
    printf("reverse number %d",rev);

    return 0;
}