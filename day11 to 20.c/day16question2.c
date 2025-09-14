#include<stdio.h>
int main(){
    int rev=0,num,rem,original;

    printf("enter the number num");
    scanf("%d",&num);

    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

    }
    if(original==rev)
        printf("it is palidrome %d",original);
    
    else
        printf("it is not palidrome %d",original);
    
    return 0;
}