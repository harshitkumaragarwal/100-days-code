#include<stdio.h>
int main(){

    int i,num,j;

    printf("eenter the number num");
    scanf("%d",&num);

    for(i=1;i<num;i++){
        for(j=1;j<num;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}