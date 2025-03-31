#include<stdio.h>
int no_of_digit(int n){
    if(n<=9)
    return 1;
    else
    return 1+no_of_digit(n/10);

}
int main(){
    int n;
    printf("enter a no is ");
    scanf("%d",&n);
    printf("no of digits is %d",no_of_digit(n));
}