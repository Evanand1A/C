#include <stdio.h>
/* Q28. Find out whether a given number is perfect or not */
int main(){
    int n,i,s=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0) s=s+i;
    }
    if(s==n) printf("Perfect");
    else printf("Not perfect");
    return 0;
}
