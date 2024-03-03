#include <stdio.h>
int main(){
	int n,i,j;
	int sum = 0;
	scanf("%d",&n);
	int bandau = n;
	while (n >0){
		int giaithua = 1;
		i = n %10;
		for (j = 1;j <= i; j++){
			giaithua *=  j;
		}
		sum = sum + giaithua;
		n /= 10;
	}
	if (bandau ==sum){
		printf("1");
	}
	else{
		printf("0");
	}
}
