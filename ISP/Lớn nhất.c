#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int ch[n][m];
        int i,j;
        for( i = 0; i < n; i++) {
            for( j = 0; j < m; j++) {
                scanf("%d", &ch[i][j]);
            }
        }
        int sum, kq = 0;
        for ( i = 0 ; i < m; i++){
            sum = 0;
            for ( j = 0 ; j< n; j++){
                sum += ch[i][j];
            }
            if (  sum > kq){
                kq  = sum;
            }
        }
        printf("%d\n",kq);
    }
}