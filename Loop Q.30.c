#include <stdio.h>
/* Q30. Find out all prime numbers between 1 and 500 */
int main(){
    int i,j,f;
    for(i=2;i<=500;i++){
        f=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){f=1;break;}
        }
        if(f==0) printf("%d ",i);
    }
    return 0;
}
