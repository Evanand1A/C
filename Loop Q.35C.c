#include <stdio.h>
/* Q35C. Print the given series (loop within loop) */
int main(){
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
