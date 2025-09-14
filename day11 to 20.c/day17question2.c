#include<stdio.h>
int main(){
    int num,i,prime=0;

    printf("enter the number num");
    scanf("%d",&num);

    if(num<=1){
        prime=0;
    } else{
        for(i=2;i<=num/2;i++){
            if(num%1==0){
                prime==0;
                break;
            }
        }
    }
    if(prime==1)
        printf("is prime number %d",num);
        else
            printf("not prime%d",num);
        

    
}