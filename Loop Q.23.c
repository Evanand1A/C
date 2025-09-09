#include <stdio.h>
/* Q23. Summation of digits of a given number */
int main(){
    int n,s=0,r;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("Sum=%d",s);
    return 0;
}
