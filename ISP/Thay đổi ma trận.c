#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        long long int ch[n][m];
        int i,j,k;
        for( i = 0; i < n; i++) {
            for( j = 0; j < m; j++) {
                scanf("%lld", &ch[i][j]);
            }
        }
        long long int ck[n][m];
        long long int a,b,c,d;
        for ( i = 0 ; i<n ; i++){
            for ( j = 0 ; j < m; j++){
                
                a = ( j - 1 < 0) ?0 : ch[i][j-1];
                b = (j+1 == m)  ?0: ch[i][j+1];
                c = (i + 1 == n ) ?0 :ch[i+1][j] ;
                d = (i - 1 < 0) ?0  :ch[i-1][j];
                

                ck[i][j] = a + b + c + d;
            }
        }


        
        
        for( i = 0; i < n; i++) {
            for( j = 0; j < m; j++) {
                printf("%lld ",ck[i][j]);
            }
            printf("\n");
        }

    }
}