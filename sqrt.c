#include<stdio.h>
#include<math.h>
double squareroot(double n){
    return sqrt(n);

}
int main(){
    int n;
    printf("enter no ");
    scanf("%d",&n);
    printf("%f",squareroot(n));
}