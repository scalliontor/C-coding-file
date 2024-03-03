#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int ch[n],ck[m];
	int i,j,l;
	for (i = 0; i< n; i++){
		scanf("%d",&ch[i]);
	}
	for (i = 0; i< m; i++){
		scanf("%d",&ck[i]);
	}
	int kq[n+m];
	for ( i = 0; i < n; i++){
		kq[i] = ch[i];
	}
	for ( i = 0; i < m; i++){
		kq[i + n] = ck[i] ;
	}
	int a = n+m;



	int temp;


	for (i = 0; i < a;i++){
		for (j = i+ 1; j < a ; j++){
			if (kq[i] > kq[j]){
				temp = kq[i];
				kq[i] = kq[j];
				kq[j] = temp;	
			}
		}
	}
	
	for (i = 0 ; i < n+m; i++){
		int mark = 0;
		for (j=0 ; j<i ; j++){
			if (kq[j]== kq[i]){
				mark = 1;
				break;
			}
		}
		if (mark == 0){
			printf("%d ", kq[i]);
		}
	}
	
	
}
