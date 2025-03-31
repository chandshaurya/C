#include<stdio.h>
void main(){
    int n,last,reverse,a;
    printf("enter a no");
    scanf("%d",&n);
    a=n;
    reverse=0;
    while(n>0){
        last=n%10;
        n=n/10;

        reverse = reverse*10 + last;
    }
    if(a=reverse)
    printf("%d is a palindrome no",reverse);
    else
    printf("%d is a not a palindrome",a);
}