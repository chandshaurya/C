#include<stdio.h>
int main(){
    int rows,cols,space;

    for(rows=1;rows<=5;rows++){
        for(cols=1;cols<=rows;cols++){
            printf("%d",cols);
        }
        printf("\n");
    }

    for(rows=1;rows<=5;rows++){
        for(cols=1;cols<=5;cols++){
            printf("%d",cols);
        }
        printf("\n");
    }

     for(rows=1;rows<=5;rows++){
        for(cols=1;cols<=6-rows;cols++){
            printf("%d",cols);
        }
        printf("\n");
    }

     for(rows=1;rows<=5;rows++){
        for(cols=1;cols<=5;cols++){
            printf("%d",rows);
        }
        printf("\n");
    }

        for(rows=1;rows<=5;rows++){
        for(space=1;space=5-rows;space++){
            printf("");
        }
        for(cols=1;cols<=rows;cols++){
            printf("*");
        }
        printf("\n");
    }
        



}