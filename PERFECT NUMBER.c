#include <stdio.h>
int main(){
	int n,i;
	int sum = 0;
	scanf("%d",&n);
	for ( i=1;i<n;i++){
		if (n %i ==0){
			sum += i;
		}
	}
	if (sum == n ){
		printf("1");
	}
	else{
		printf("0");
	}
}
