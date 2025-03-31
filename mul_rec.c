#include<stdio.h>
int mul(int a,int b){
    if(b==1)
    return a;
    else 
    return a+mul(a,b-1);

}
int main(){
    int a,b;
    printf("enter two no ");
    scanf("%d %d",&a,&b);
    printf("%d",mul(a,b));
}