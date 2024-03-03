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
        int i,j;
        long long int lon1 = 0,lon2 = 0;
        int il1  =0,jl1 =0,il2 =0,jl2 =0;
        for( i = 0; i < n; i++) {
            for( j = 0; j < m; j++) {
                scanf("%lld", &ch[i][j]);
                if ( ch[i][j] > lon1 && ch[i][j]> lon2){
                    lon2 = lon1;
                    il2 = il1;
                    jl2 = jl1;
                    
                    lon1 = ch[i][j];
                    il1 = i;
                    jl1 = j;
                    
                }
                else if ( ch[i][j] < lon1 && ch[i][j]> lon2){
                    lon2 = ch[i][j];
                    il2 = i;
                    jl2 = j;
                }
            }
        }
        int tempa;
        for ( i = 0 ; i < n ; i++){
            tempa = ch[i][jl1];
            ch[i][jl1] = ch[i][jl2]; 
            ch[i][jl2] = tempa;
        }


        for( i = 0; i < n; i++) {
            for( j = 0; j < m; j++) {
                printf("%lld ",ch[i][j]);
            }
            printf("\n");
        }

    }
}