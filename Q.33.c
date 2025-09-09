#include <stdio.h>
/* Q33. Check whether a given number is automorphic or not */
int main(){
    int n,sq,t,m=1;
    printf("Enter number: ");
    scanf("%d",&n);
    sq=n*n;
    t=n;
    while(t>0){
        m=m*10;
        t=t/10;
    }
    if(sq%m==n) printf("Automorphic");
    else printf("Not automorphic");
    return 0;
}
