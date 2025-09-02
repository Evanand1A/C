#include <stdio.h>
// Q19. Print all integers from 1 to 100 divisible by 3.
void main() {
    int i;
    for(i=1;i<=100;i++) {
        if(i%3==0) {
            printf("%d ",i);
        }
    }
}
