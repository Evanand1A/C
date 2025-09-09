#include <stdio.h>
/* Q26. Find out whether a given number is Armstrong or not */
int main(){
    int n,r,s=0,t;
    printf("Enter number: ");
    scanf("%d",&n);
    t=n;
    while(n>0){
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    if(s==t) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
