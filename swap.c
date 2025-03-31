#include<stdio.h>
void main(){
    int a=10,b=20,c;
    c=a;
    a=b;
    b=c;
    printf("%d%d",a,b);

    printf("\n");
    int x=10,y=20;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d%d",x,y);

    printf("\n");
    int p=10,q=20;
    p=p^q;
    q=p^q;
    p=p^q;
    printf("%d%d",x,y);



}