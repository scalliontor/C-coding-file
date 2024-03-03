#include <stdio.h>
	



int main(){
	int n, m, p;
	scanf("%d%d%d",&n,&m,&p);
	int ch[n][m];
	int ck[m][p];
	int i,j,k;
	
	for( i = 0; i < n; i++) {
        for( j = 0; j < m; j++) {
            scanf("%d", &ch[i][j]);
        }
	}
	
	for( i = 0; i < m; i++) {
        for( j = 0; j < p; j++) {
            scanf("%d", &ck[i][j]);
        }
	}
	
	int kq[n][p];
	
	for ( i = 0; i < n; i++) {
        for ( j = 0; j < p; j++) {
			kq[i][j] = 0;
 			for ( k = 0; k < m; k++) {
                kq[i][j] += ch[i][k] * ck[k][j];
            }
 
            printf("%d ", kq[i][j]);
        }
 		printf("\n");
    }
    return 0;
}
	
	
	
	


