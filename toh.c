#include<stdio.h>
int toh(int n,char source,char dest,char aux){
    if(n==1)
    printf("%c-%c\n",source,dest);
    else{
    toh(n-1,source,aux,dest);
    printf("%c-%c\n",source,dest);
    toh(n-1,aux,dest,source);
    }
}
int main(){
    int n;
    printf("enter no of disks ");
    scanf("%d",&n);
    toh(n,'A','B','C');
}