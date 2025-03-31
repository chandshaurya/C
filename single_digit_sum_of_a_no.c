#include<stdio.h>
void main(){
    int n,last,sum,a,b;
    printf("enter a no");
    scanf("%d",&n);

    sum=0;
    while(n>0){
        last=n%10;
        n=n/10;

        sum=sum+last;
    }
    a=0;
    while(sum>9){
        b= sum%10;
        sum=sum/10;
        a=a+b;
        
    }
    if(sum>9)
    printf("%d",a);
    else
    printf("%d",sum);

}