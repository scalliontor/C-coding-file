#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ch[n][n];
	int i;
	int j;
	int temp = 1;
	int top =0;
	int bottom = n-1;
	int left = 0;
	int right = n-1;
	
	while (top <=bottom && left <= right){
		for ( i = left ; i <= right; i++){
			ch[top][i] = temp;
			temp++;
		}
		top++;
		for (i = top; i <= bottom ; i++){
			ch[i][right] = temp;
			temp++;
		}
		right--;
		for ( i = right; i >= left; i--){
			ch[bottom][i] = temp;
			temp ++;
		}
		bottom--;
		for ( i = bottom ; i >= top; i--){
			ch[i][left] = temp;
			temp++;
		}
		
		
		left++;

	}
	
	for ( i = 0 ; i < n; i++){
		for (j = 0; j < n; j++){
			printf("%d ",ch[i][j]);
		}
		printf("\n");
	}
}
