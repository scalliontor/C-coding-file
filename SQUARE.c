#include<stdio.h>
int main() {
	int m;		
	long n,ketqua,so;
	scanf("%d", &m);
	for ( so = 0; so < m; so++) {
		scanf("%ld", &n);
		ketqua = n*n;
		printf("%ld\n", ketqua);
	}
	return 0;
}
