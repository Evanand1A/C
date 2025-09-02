#include <stdio.h>
// Q18. Count boys and girls in a class.
void main() {
    int n,i;
    char sex;
    int boys=0,girls=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf(" %c",&sex);
        if(sex=='M' || sex=='m') boys++;
        else if(sex=='F' || sex=='f') girls++;
    }
    printf("Boys=%d Girls=%d",boys,girls);
}
