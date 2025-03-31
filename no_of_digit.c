#include<stdio.h>
void main(){
    int n,count,a,digit;
    
    printf("enter no");
    scanf("%d",&n);
    a=n;
    count=0;

    if(n==0){
        printf("no of digits in %d is 1",a);
    }

    while(n!=0){
        digit=n%10;
        n=n/10;
        count++;
    }

if(count>0)
printf("no of digits in %d is %d",a,count);
}