#include<stdio.h>
void main(){
    int n,count,a,b,prod,last,sum;
    printf("enter a no");
    scanf("%d",&n);
    b=a=n;


    sum=0;
    count=0;
    while(n!=0){
        n=n/10;
        count++;     //no of digit
    }

    while(a!=0){
        last=a%10;
        a=a/10;
        prod=1;
        for(int i=1;i<=count;i++){
           prod=prod*last;
        }
        sum=sum+prod;
    }

    if(b==sum)
    printf("%d is a armstrong no",sum);
    else
    printf("%d is not a armstrong no",sum);







}
