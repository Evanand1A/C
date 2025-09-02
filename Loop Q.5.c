#include <stdio.h>
// Q5. Print 1st n odd nos.
void main() {
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=2*n;i+=2) {
        printf("%d ",i);
    }
}
