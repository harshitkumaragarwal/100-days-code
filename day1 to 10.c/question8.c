#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter a number");
    scanf("%d",&a);

    printf("enter b number");
    scanf("%d",&b);

    printf("enter c number");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("a is largest number %d",a);
    } else if(b>a && b>c){
         printf("b is largest number %d",b);
    }
    else
    printf("c is largest number %d",c);

    return main;





}