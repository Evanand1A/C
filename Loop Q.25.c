#include <stdio.h>
/* Q25. Check whether a given number is palindrome or not */
int main(){
    int n,r,rev=0,t;
    printf("Enter number: ");
    scanf("%d",&n);
    t=n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(t==rev) printf("Palindrome");
    else printf("Not palindrome");
    return 0;
}
