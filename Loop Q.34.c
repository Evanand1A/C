#include <stdio.h>
/* Q34. Print Fibonacci series up to n numbers */
int main(){
    int n,a=1,b=1,c,i;
    printf("Enter n: ");
    scanf("%d",&n);
    if(n>=1) printf("%d ",a);
    if(n>=2) printf("%d ",b);
    for(i=3;i<=n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}
