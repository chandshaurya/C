#include<stdio.h>
void main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%2==0){
        printf("even no");
    }
    else
    printf("odd");

    printf("\n");

    if((n&1)==0){
        printf("even");
    }
    else
    printf("odd");

    printf("\n");

    //for positive number//

    if(n==((n>>1)<<1)){
        printf("even");
    }
    else
    printf("odd");








}