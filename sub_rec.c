#include<stdio.h>
int sub(int a,int b){
    if(b==0)
    return a;
    else 
    return sub(a,b-1)-1;

}
int main(){
    int a,b;
    printf("enter two no ");
    scanf("%d %d",&a,&b);
    printf("%d",sub(a,b));
}
