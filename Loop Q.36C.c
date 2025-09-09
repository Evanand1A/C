#include <stdio.h>
/* Q36C. Print the given series (parallel loop) */
int main(){
    int i,j;
    for(i=3;i>=1;i--){
        for(j=1;j<=2;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
