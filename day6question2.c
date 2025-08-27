#include<stdio.h>
int main(){
     int positive,negative,zero;
     float a;

     printf("enetr the vale of a ");
     scanf("%f",&a);

     if(a>=0){
        if(a==0){
            printf("the number is zero");
        } else{
            printf("the number is positive");
        }
     } else {
        printf("the number is negative");
     }

     return 0;
}