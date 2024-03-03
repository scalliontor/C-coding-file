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
	int shift;
	scanf("%d",&shift);	

	for (i = shift ; i < n; i ++){
		printf("%d ", ch[i]);
	}
	for (i= 0; i < shift; i++ ){
		printf("%d ",ch[i]);
	}
	
}
