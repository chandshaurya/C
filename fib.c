#include<stdio.h>
int fib(int n){
    if(n==0)
    return 0;
    else if(n==2||n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    printf("enter no ");
    scanf("%d",&n);
    printf("%d",fib(n));
}