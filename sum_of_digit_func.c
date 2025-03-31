#include <stdio.h>
int sum_of_digit(int n){
    int sum;
    sum=0;
    if(n<=9){
        return n;
    }
    else 
      sum =  n%10 + sum_of_digit(n/10);
    return sum;
}
void main(){
    int n;
    printf("enter a no ");
    scanf("%d",&n);
    printf("Sum of digits: %d\n", sum_of_digit(n));
    }