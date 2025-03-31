#include <stdio.h>


int main() {
    int n,last,a,sum;
    printf("enter a no");
    scanf("%d",&n);
    a=n;
    sum=0;

    while(n>0){
        last=n%10;
        n=n/10;
        sum=sum+last*last*last;

    }

    if(a==sum){
        printf("%d is a armstrong no",a);
    }
    else{
        printf("%d is not a armstrong no",a);
    }
}
