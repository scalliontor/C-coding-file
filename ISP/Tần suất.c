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
	int temp = 0;

	for (i = 0 ; i< n; i++){
		int check = 1;
		int mark =0;
		for (j = i +1; j< n; j++){
			if (ch[i] == ch[j]){
				temp = ch[i] ;
				check ++;
			}
		}
		for (j =i-1; j>= 0; j--){
			if (ch[i] == ch[j]){
				mark = 1;
			}
		}
		if (mark == 0){
			printf("%d ", ch[i]);
			printf("%d\n",check);
		}
	}
}