#include <stdio.h>
// Q8. Print sum of 1st n odd nos.
void main() {
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=2*n;i+=2) {
        sum=sum+i;
    }
    printf("%d",sum);
}
