#include<stdio.h>
int main(){
    int a,b,c;

    printf("enetr three side");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b==c){
        printf("equlilateral");
    }
    else if(a==b||b==c||c==a){
        printf("isoscles");
    }
    else{
        printf("scales");
    }
    return 0;
}