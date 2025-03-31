#include<stdio.h>
void main(){
    int a[]={10,10,30,40,30,40,30,30,5};
    int x=0;
    for(int i=0;i<9;i++){
        x=x^a[i];
    }
    printf("%d",x);
}