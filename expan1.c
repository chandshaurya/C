#include<stdio.h>
#include<math.h>
void main (){
    float x,sum=0.0,t=1.0;
    int i,n;
    printf("Enter the value for x: ");
    scanf("%f", &x);
    printf("\nEnter the value for n: ");
    scanf("%d", &n);
    pow(-1,i-1);
    for (i = 1; i <= n; i++) {
        t = pow(-1,i-1)*t * x / (2*i-1);
        sum = sum + t;
    }

    printf("%f",sum);
}