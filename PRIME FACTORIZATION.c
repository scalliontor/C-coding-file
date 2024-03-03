#include <stdio.h>
int main(){
	int t,i;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d",&n);
		for ( i = 2; i<=n; i ++){
			while ( n % i == 0) {
				printf("%d ", i);
				n /= i;
			}		
		}
		printf("\n");
	}
}
