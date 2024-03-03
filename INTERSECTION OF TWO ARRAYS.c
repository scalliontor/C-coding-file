#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	unsigned int ch[n],ck[m];
	int i,j,l;
	for (i = 0; i< n; i++){
		scanf("%d",&ch[i]);
	}
	for (i = 0; i< m; i++){
		scanf("%d",&ck[i]);
	}
	
	int kq[n+m];
	int a = 0;
	for ( i = 0 ; i < n ; i++){
		int check  = 0;
		for ( j = 0; j < m  ; j++){
			if (ch[i]  == ck[j]){
				kq[a] = ch[i];
				a++;
				break;
			}
		}
	}
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
	for ( l=1;l<=a;l++){
		if (kq[l] != kq[l-1] )
			printf("%d ",kq[l-1]);
	}
}
