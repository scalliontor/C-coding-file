#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j,l;
	int ch[n];
	char kq[n];
	for (i = 0; i< n; i++){
		scanf("%d",&ch[i]);
	}
	int a= 0;
	
	int count = 0;
	for (j = 0; j < n; j++){
		int check = 0;
		for (l = j+ 1 ; l < n ;l++){
			if (ch[j] == ch[l]){
				check = 1;  
				break;
			}
		}
		for (l = 0 ; l < j ;l++){
			if (ch[j] == ch[l]){
				check = 1;  
				break;
			}
		}
		
		if (check == 0){
			count ++;
			kq[a] = ch[j];
			a ++;
		}
	}
	printf("%d\n",count);
	for ( i=0;i<a;i++){
		printf("%d ",kq[i]);
	}	
}
