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
	int a,b;
	scanf("%d%d",&a,&b);
	
	
	int temp[n][m];
	int tempa;
	
	for ( i = 0 ; i < n ; i++){
		tempa = ch[i][a-1];
		ch[i][a-1] = ch[i][b-1]; 
		ch[i][b-1] = tempa;
	}
	
	for( i = 0; i < n; i++) {
        for( j = 0; j < m; j++) {
        	printf("%d ", ch[i][j]);

        }
    	printf("\n");
    }
	
}
