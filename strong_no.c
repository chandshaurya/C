#include<stdio.h>
void main(){
    int n,sum,last,prod,a;
    printf("enter a no");
    scanf("%d",&n);
    a=n;
   sum=0;
    while(n!=0){
        last=n%10;
        n=n/10;

        prod=1;
        for(int i=1;i<=last;i++){
            prod=prod*i;
        }
        sum=sum+prod;
    }

    if(a==sum)
    printf("%d is a strong no",sum);
    else
    printf("%d is not a strong no",sum);
}