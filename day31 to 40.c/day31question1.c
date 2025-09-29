#include<stdio.h>
int main(){
    int i,n,key,found=0;

    printf("enter the number");
    scanf("%d",&n);

    int arr[n];

    printf("enter the number %d",n);
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter the number to search");
    scanf("%d",&key);
    for(i=0;i<=n;i++){
        if(arr[i]==key){
            printf("%d %d",key,i+1);

            found=1;
            break;
        }   
    }
    return 0;
}