#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k, s;
		int sum = 1e9, temp;
		scanf("%d %d", &n, &k);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n - k + 1; i++){
			int temp = 0;
			for(int j = 0; j < k; j++) temp += a[i + j];
			sum = (temp < sum) ? temp : sum;
		}
		printf("%d\n", sum);
	}
	return 0;
}
