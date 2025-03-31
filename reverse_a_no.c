#include<stdio.h>
void main(){
    int n,last,reverse;
    printf("enter a no");
    scanf("%d",&n);

    reverse=0;
    while(n>0){
        last=n%10;
        n=n/10;

        reverse = reverse*10 + last;
    }

    printf("%d",reverse);

}