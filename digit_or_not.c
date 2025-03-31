#include<stdio.h>
void main(){
    char ch;
    printf("enter the character");
    scanf("%d",&ch);
    
    if(ch>=0 && ch<=9){
        printf("%d is digit",ch);
    }
    else
    printf("%d is not digit",ch);










   
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (isdigit(c) == 0) {
        printf("%c is not a digit.\n", c);
    } else {
        printf("%c is a digit.\n", c);
    }

    return 0;
}

