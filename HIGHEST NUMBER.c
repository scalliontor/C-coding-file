#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>



int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int ch[n];
        int i,j,k;
        for ( i= 0 ; i< n ; i++){
            scanf("%d",&ch[i]);
        }
        int kq = ch[0];
        for (i  = 1; i < n; i++){
            if (ch[i] > kq){
                kq = ch[i];
            }
        }
        printf("%d\n",kq);
        for ( i = 0; i< n ; i++){
            if (ch[i] == kq){
                printf("%d ",i);
            }
        }
        printf("\n");
    }
}   