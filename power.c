#include<stdio.h>
void main(){
    int a,b,prod;
    printf("enter base and power");
    scanf("%d%d",&a,&b);

    prod=1;
    for(int i=1;i<=b;i++){
        prod=prod*a;
        
    }
    printf("%d to power of %d is %d",a,b,prod);

}