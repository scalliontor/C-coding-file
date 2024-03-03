#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int numbertc = 1;
	while (t--){
		int n, m;
		scanf("%d%d",&n,&m);
		int ch[n][m];
		int i,j,k;
		for( i = 0; i < n; i++) {
        	for( j = 0; j < m; j++) {
            	scanf("%d", &ch[i][j]);
			}
		}
		
		int temp[m][n];
		for (i =0; i< m; i++){
			for (j =0; j <n ; j ++){
				temp[i][j] = ch[j][i];	
			}
		}
		

		printf("Test %d:\n",numbertc);
		numbertc ++;
		
		int kq[n][n];
		for (i = 0; i < n; i ++){
			for ( j = 0; j <n; j++){
				kq[i][j] = 0;
				for (k = 0 ; k < m; k ++){
					kq[i][j] += ch[i][k] * temp[k][j];
				}
				printf("%d ",kq[i][j]);
			}
			printf("\n");
		}
	}
}
