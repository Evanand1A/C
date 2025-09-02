#include <stdio.h>
// Q16. Find out largest and smallest out of 100 nos.
void main() {
    int i,num,largest,smallest;
    scanf("%d",&num);
    largest=smallest=num;
    for(i=2;i<=100;i++) {
        scanf("%d",&num);
        if(num>largest) largest=num;
        if(num<smallest) smallest=num;
    }
    printf("Largest=%d Smallest=%d",largest,smallest);
}
