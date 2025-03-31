#include<stdio.h>

void main() {

    int i,j;
    
    for(i=1;i<=5;++i) {
        for(j=1;j<=i;++j) {
            printf("*")
            ;
        }
        printf("\n");
    }



    int x,y;
    for(x=1;x<=5;++x){
        for(y=0;y<=5-x;++y){
            printf("#");
        }
        printf("\n");
    }

   

    int n;
    printf("enter the no of rows");
    scanf("%d",&n);
    for(int p=1;p<=n;++p){
        for(int q=1;q<=n;++q){
            printf("*");
        }
        printf("\n");
    }

    



                           










    


    
}



