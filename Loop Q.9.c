#include <stdio.h>
// Q9. Print sum of 1st n even nos.
void main() {
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=2;i<=2*n;i+=2) {
        sum=sum+i;
    }
    printf("%d",sum);
}
