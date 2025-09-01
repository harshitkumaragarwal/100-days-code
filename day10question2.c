#include<stdio.h>
int main(){
    int day,date;

    printf("enter number 1 to 7");
    scanf("%d",&date);

    switch(date){
        case 1:
        printf("monday");
        break;

        case 2:
        printf("tuesady");
        break;

        case 3:
        printf("wednesday");
        break;

        case 4:
        printf("thursady");
        break;

        case 5:
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;

        case 7:
        printf("sunday");
        break;

        default:
        printf("invalid input! please enter number between 1 to 7");
    }
    return 0;
}