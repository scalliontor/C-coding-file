#include <stdio.h>
int main(){
	int n,kq = 1;
	scanf("%d", &n);
	while (n>0){
		kq *= n%10;
		n /= 10;
	}
	printf("%d", kq);
}
