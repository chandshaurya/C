#include<stdio.h>
void main(){
    int a,b,prod;
    printf("enter two no");
    scanf("%d%d",&a,&b);
    
    for(int i=a;i<=b;i++){
        prod=1;
        for(int s=1;s<=i;s++){
            prod=prod*s;
        }
        printf("factorial of %d is %d\n",i,prod);
    }

}