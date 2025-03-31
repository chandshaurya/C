#include<stdio.h>
int power(int a ,int b){
    if(b==1){
        return a;
    }
    else
    return a * power(a,b-1);
}
void main(){
    int x,y;
    printf("enter base and power is ");
    scanf("%d %d",&x,&y);
    printf("%d",power(x,y));
}