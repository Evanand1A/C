#include <stdio.h>
// Q6. Print 1st n even nos.
void main() {
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=2*n;i+=2) {
        printf("%d ",i);
    }
}
