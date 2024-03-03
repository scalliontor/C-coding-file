#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	int ch[n];
	int i,j;
	for (i = 0; i< n; i++){
		scanf("%d",&ch[i]);
	}
	int temp;
	for (i =0; i< n;i++){
		for (j = i+1; j< n; j++){
			if (ch[i] > ch[j]){
				temp = ch[i];
				ch [i] = ch[j];
				ch[j] = temp;
				j = i+1;
			}
		}
	}
	for ( i=0;i<n;i++){
		printf("%d ",ch[i]);
	}
}
