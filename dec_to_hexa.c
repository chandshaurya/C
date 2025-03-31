#include<stdio.h>
int dec_to_hexa(int n){
    int digits;
    if(n<=9){
        printf("%d",n);
       
    }
    else if(n>=9&&n<=15){
        printf("%c",n+55);
    }
    else{
        
        dec_to_hexa(n/16);
        if(n%16<=9)
        printf("%d",n%16);
        else
        printf("%c",n%16+55);


        }
        
     
}
void main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    dec_to_hexa(n);
}
