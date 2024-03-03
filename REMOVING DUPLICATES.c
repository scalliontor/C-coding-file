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
	for (i = 0 ; i< n; i++){
		int mark = 0;
		for (j=0;j<i;j++){
			if (ch[i]== ch[j]){
				mark = 1;
			}
		}
//		for ( j = i + 1; j < n;j ++){
//			if (ch[i]== ch[j]){
//				mark = 0;
//			}
//		}
		if (mark == 0){
			printf("%d ", ch[i]);
		}
	}
}
