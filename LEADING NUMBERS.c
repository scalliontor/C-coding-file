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
        for ( i = 0 ; i< n ; i++){
            scanf("%d",&ch[i]);
        }
        for ( i = 0; i < n ; i++){
            int mark =1;
            for ( j = i + 1; j < n; j++){
                if ( ch[i] <= ch[j]){
                    mark = 0;
                    break;
                }
            }
            if ( mark == 1){
                printf("%d ",ch[i]);
            }
        }
        printf("\n");

        
    }
}