#include<stdio.h>
int add(int a,int b){
    if(b==0)
    return a;
    else 
    return 1+add(a,b-1);

}
int main(){
    int a,b;
    printf("enter two no ");
    scanf("%d %d",&a,&b);
    printf("%d",add(a,b));
}
