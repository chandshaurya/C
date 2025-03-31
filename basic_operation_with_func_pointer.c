#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a, int b){
    return b-a;

}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return b/a;
}

void main(){
    int (*p)(int,int);
    p = add;
    printf("%d\n",(*p)(10,20));
    p= sub;
    printf("%d\n",(*p)(10,20));
    p= mul;
    printf("%d\n",(*p)(10,20));
    p= div;
    printf("%d\n",(*p)(10,20));
}