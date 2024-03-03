#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n,m,i;
		int sonho;
		scanf("%d%d", &n, &m);
		if (n>m){
			sonho = m;
		}
		else {
			sonho = m;
		}
		for ( i =sonho; i>0 ; i--){
			if (n%i ==0 && m % i==0){
				printf("%d\n", i);
				break;
			}
		}
	}
}
