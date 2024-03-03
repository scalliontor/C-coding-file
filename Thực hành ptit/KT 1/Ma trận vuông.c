
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
        int ch[n][n];
        for( int i = 0; i < n; i++) {
        	for( int j = 0; j < n; j++) {
            	scanf("%d", &ch[i][j]);
			}
		}
        for(int i = 0; i < n; i++){
			if(i % 2 == 0){
				for(int j = 0; j < n; j++){
					printf("%d ", ch[j][i]);
				}
			} else {
				for(int j = n - 1; j >= 0; j--){
					printf("%d ", ch[j][i]);
				}
			}
		}
		printf("\n");
    }
}