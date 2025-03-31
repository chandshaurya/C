#include<stdio.h>
void main(){
    int i,n;
    printf("enter no");
    scanf("%d",&n);

    if(n==1){
        printf("not prime");
    
    }

    for(i=2;i<n;i++){
        if(n%i==0){
            // is a factor of n

            printf("%d is not prime no",n);
        }
    }

    if(n==i){
        printf("%d is a prime no",n);
    }

    

}