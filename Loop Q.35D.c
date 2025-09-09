#include <stdio.h>
/* Q35D. Print the given series (loop within loop) */
int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=2;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
