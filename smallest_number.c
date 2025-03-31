#include<stdio.h>
void main(){
    int a,b;
    int smallest_no;
    printf("enter two no");
    scanf("%d%d",&a,&b);
    smallest_no = a>b?b:a;
    printf("%d",smallest_no);
    


}