#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int ch[n][m];
	int i,j;
	for( i = 0; i < n; i++) {
        for( j = 0; j < m; j++) {
            scanf("%d", &ch[i][j]);
        }
	}
	// int temp[m][n];
	// for( i = 0; i < m; i++) {
    //     for( j = 0; j < n; j++) {
    //         temp[i][j] = ch[j][i];
    //     }
	// }
	for( i = 0; i < m; i++) {
        for( j = 0; j < n; j++) {
        	printf("%d ", ch[j][i]);
        }
		printf("\n");	
    }
}
