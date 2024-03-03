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
	int step  =0;
	for (i = 0; i < n;i++){
		for (j = 0; j < i ; j++){
			if (ch[i] < ch[j]){
				temp = ch[i];
				ch[i] = ch[j];
				ch[j] = temp;	
			}
		}
		printf("Buoc %d: ",step);

		for ( l=0; l <= step;l++){
			printf("%d ",ch[l]);	
		}
		step ++;
		printf("\n");
	}
}
