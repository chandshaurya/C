#include<stdio.h>
int dec_to_octal(int n){
    int digits;
    if(n<=7){
        printf("%d",n);
        return;
    }
    else{
        
        dec_to_octal(n/8);
        printf("%d",n%8);


        }
        
     
}
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    dec_to_octal(n);
}
