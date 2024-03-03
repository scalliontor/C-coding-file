#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int ch[n+ 1][m + 1];
	int i,j;
	
	for( i = 0; i < n; i++) {
        for( j = 0; j < m; j++) {
            scanf("%d", &ch[i][j]);
        }
	}
	int a,b;
	scanf("%d%d",&a,&b);

	int tempa;
	
	for ( i = 0 ; i < m ; i++){
		tempa = ch[a-1][i];
		ch[a-1][i] = ch[b-1][i]; 
		ch[b-1][i] = tempa;
	}
	
	for( i = 0; i < n; i++) {
        for( j = 0; j < m; j++) {
        	printf("%d ", ch[i][j]);

        }
    	printf("\n");
    }
	
}
