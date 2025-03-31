#include<stdio.h>
int swap(int,int);
int main(){
    int a=10,b=20;
    swap(a,b);
    printf("%d %d",a,b);
}
int swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("%d %d",x,y);
}