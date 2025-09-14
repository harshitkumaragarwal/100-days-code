#include<stdio.h>
int main(){
    
    float percentage,mark;

    printf("enter your mark");
    scanf("%f",&mark);

    if(mark>85){
        printf("A grade");
    } 
    else if(mark>65 && mark<85){
        printf("B grade");
    }
    else if(mark>50 && mark<65){
        printf("C grade");
    }
    else{
        printf("D grade");
    }
    return 0;
}