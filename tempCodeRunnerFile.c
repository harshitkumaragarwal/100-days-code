#include<stdio.h>
int main(){
    int Seconds,Hours,Minutes;

    printf("enter second");
    scanf("%d",&Seconds);

    Hours=Seconds/3600;
    Minutes=(Seconds%3600)/60;
    Seconds=Seconds%60;

    printf("Hours=%d,Minutes=%d,Seconds=%d",Hours,Minutes,Seconds);

    return 0;
 }    