#include <stdio.h>
/* Q21. Separate digits of a given number */
int main(){
    int n,r;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Digits: ");
    while(n>0){
        r=n%10;
        printf("%d ",r);
        n=n/10;
    }
    return 0;
}
