#include <stdio.h>
// Q7. Print sum of n natural nos.
void main() {
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        sum=sum+i;
    }
    printf("%d",sum);
}
