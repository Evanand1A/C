#include <stdio.h>
// Q20. Print sum of all integers from 1 to 100 divisible by 5.
void main() {
    int i,sum=0;
    for(i=1;i<=100;i++) {
        if(i%5==0) {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
