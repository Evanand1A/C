#include <stdio.h>
// Q17. Count +ve, -ve and zeroes in 200 values.
void main() {
    int i,num,pos=0,neg=0,zero=0;
    for(i=1;i<=200;i++) {
        scanf("%d",&num);
        if(num>0) pos++;
        else if(num<0) neg++;
        else zero++;
    }
    printf("Positive=%d Negative=%d Zero=%d",pos,neg,zero);
}
