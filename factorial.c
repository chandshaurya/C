#include<stdio.h>
void main(){
    int i,n;
    int product;
    printf("enter no");
    scanf("%d",&n);
    product=1;
    for(i=1;i<=n;++i){
        product =product*i;
    }
    printf("%d",product);
}