#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	int ch[n];
	int i,j,l;
	for (i = 0; i< n; i++){
		scanf("%d",&ch[i]);
	}
	int temp;
	int step  = 1;
	for ( i = 0;i<n-1;i++){
		for ( j= i+1 ; j<n;j++){
			if(ch[i]>ch[j]){
				temp = ch[i];
				ch [i] = ch[j];
				ch[j] = temp;
			}
		}
		printf("Buoc %d: ",step);
		step++;
		for ( l=0;l<n;l++){
			printf("%d ",ch[l]);
		}
		printf("\n");
	}
}
