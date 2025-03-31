#include<stdio.h>
void main(){
    int n,sum;
    sum=0;
    printf("enter a no");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            //is a factor of n
            sum=sum+i;

        }
    }
        if(sum=n){
            printf("perfect no");
        }
        else
        printf("not perfect no");

    
}