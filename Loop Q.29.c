#include <stdio.h>
/* Q29. Check whether a given number is prime or not */
int main(){
    int n,i,f=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){f=1;break;}
    }
    if(f==0 && n>1) printf("Prime");
    else printf("Not prime");
    return 0;
}
