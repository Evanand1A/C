#include <stdio.h>
/* Q22. Count how many digits are there in a given number */
int main(){
    int n,c=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n>0){
        c++;
        n=n/10;
    }
    printf("Count=%d",c);
    return 0;
}
