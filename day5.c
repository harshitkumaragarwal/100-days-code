#include<stdio.h>
#include<math.h>
int main(){
    float principle,rate,time,simple ,compound;
    printf("enter the value of principle");
    scanf("%f",&principle);

    printf("enter the value of rate");
    scanf("%f",&rate);

    printf("enter the value of time");
    scanf("%f",&time);

    simple =principle*rate*time/100;

    printf("Simple Interest=%f",simple);

    compound=principle*pow((1+rate/100),time)-principle;

    printf("Compound Interest=%f",compound);

    return 0;

}