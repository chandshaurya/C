#include<stdio.h>
void main(){
    int a[5]={10,20,30,40,50};
    for(int i = 0; i<5;++i)
    printf(" %d",a[i]);
    
    printf(" %d\n",a);
    printf("%d\n",&a);
    printf("%d\n",a+1);
    printf(" %d\n",a+2);
    printf(" %d\n",*(a+1));
    printf(" %d\n",*(a+2));
    printf(" %d\n",*(a+3));

}