#include <stdio.h>
// Q15. Calculate sum and mean of any n values.
void main() {
    int n,i,val,sum=0;
    float mean;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&val);
        sum=sum+val;
    }
    mean=(float)sum/n;
    printf("Sum=%d Mean=%.2f",sum,mean);
}
