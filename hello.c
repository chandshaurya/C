#include<stdio.h>
void main() {
    printf("SHAURYA CHAND");
    int a=2, b=3,c;
    c = a+b;
    printf("  the sum of %d and %d is %d ", a,b,c);

    printf("%d",c);

    printf("\n");

    int  x,y,z;

    printf("enter two no is");
    scanf("%d%d",&x,&y);
    z = x +y;
    printf("%d",z);

    printf("\n");
    

    
    int i;
    for(i =1; i<=10;++i) {
        printf("*");
    }
    printf("\n");



    int n;
    printf("enter a no ");
    scanf("%d", &n);
    if(n%2 == 0) {
        printf("even no");
    }
    else{
        printf("odd no");
    }
    printf("\n");

    //check no is divisible by 7//
    if(n%7==0){
        printf("divisible");
    }
    else{
        printf(" not divisible");
    }

    
}