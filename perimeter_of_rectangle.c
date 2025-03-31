#include<stdio.h>
void main(){
    int a,b,perimeter;
    printf("sides of rectangle");
    scanf("%d%d",&a,&b);
    perimeter=2*(a+b);
    printf("perimeter of rectangle is %d",perimeter);

    printf("\n");

    int area;
    area= a*b;
    printf("area of rectangle is %d",area);


}