#include<stdio.h>
#include<math.h>
void main(){
    float x,sum=0.0,t=1.0;
    int i,n;
    printf("Enter the value for x: ");
    scanf("%f", &x);
    printf("\nEnter the value for n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        t = t * x / i;
        sum = sum + t;
    }
//e power x expansion
    printf("%f",sum);
}


