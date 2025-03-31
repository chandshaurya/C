#include<stdio.h>
void sum(int*p,int n){
    int sum =0;
    for(int i=0;i<n;++i)
    sum=sum+p[i];
    printf("%d",sum);

}
void main(){
    int a[4]={10,20,30,40};
    sum(a,4);
}