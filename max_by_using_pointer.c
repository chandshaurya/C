#include <stdio.h>
int max(int*x,int*y){
    int max;
    max=*x>*y?*x:*y;
    return max;
    }
int main() {
    int a,b;
    printf("enter two no");
    scanf("%d %d",&a,&b);
    
    printf("%d",max(&a,&b));

}
