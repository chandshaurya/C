//Write a function to print "Hot" or "Cold" depending on the temperature user enters.

#include<stdio.h>
int temp(int n){
    if (n>32){
        printf("hot");
    }
    else
    printf("cold");
}
void main(){
    int n;
    printf("enter temperature ");
    scanf("%d",&n);
    temp(n);
}