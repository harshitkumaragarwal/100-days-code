#include<stdio.h>
int main(){
    int a=16;
    printf("%d\n",a++ + ++a);
    printf("%d\n",++a);
    printf("%d\n",a++);
    printf("%d\n",a);
    return 0;
}