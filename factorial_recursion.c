#include<stdio.h>
int fact(int n){
    if(n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}
void main() {
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));

}