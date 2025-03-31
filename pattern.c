#include<stdio.h>
void main(){
    int rows,cols,space;

    for(rows=1;rows<=5;rows++){
        for(space=1 ;space<=5-rows ;space++){
            printf(" ");
        }
        for(cols=1;cols<=rows;cols++){
            printf("*");
        }
        printf("\n");
    }

    

    for(rows=1;rows<=5;rows++){
        for(space=1;space<=4-rows;space++){
            printf(" ");
        }
        for(cols=1;cols<=2*rows-1;cols++){
            printf("*");
        }
        printf("\n");
    }
}



