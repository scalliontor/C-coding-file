
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
int check( int n , int m){
	double kt = m - (m * 8 / 10);
	if ( n < kt  ){
		return 0;
	}
	return 1;
}
int main(){

	int n;
	scanf("%d",&n);
	int i,j;
	int ch[n][n],kq[n][n];
	for (i = 0; i < n; i++){
		for (j = 0; j< n; j++){
			scanf("%d",ch[i][j]);
			kq[i][j] = ch[i][j];
		}
	}
	int m;
	scanf("%d",&m);
	while(m--){
		int x,y,k;
		scanf("%d%d%d",&x,&y,&k);
		ch[x][y] -= k;
		ch[x][y+1] -= k;
		ch[x][y-1] -= k;
		ch[x+1][y-1] -= k;
		ch[x+1][y+1] -= k;
		ch[x+1][y] -= k;
		ch[x-1][y-1] -= k;
		ch[x-1][y] -= k;
		ch[x-1][y+1] -= k;
	}
	for (i = 0; i < n; i++){
		for (j = 0; j< n; j++){
			if ( check(ch[i][j],kq[i][j]) ){
				printf("1 ");
			}
			else{
				printf("* ");
			}
		}
		printf("/n");
	}
	
	
}
