#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int check = 0;
		int n,i;
		scanf("%d",&n);
		if (n <2 ){
			printf("NO\n");
		}
		else {
			for ( i = 2 ; i< n ; i++){
				if (n%i == 0){
					check = 1;
					break;
				}
			}	
			if (check == 1){
				printf("NO\n");
			}
			else {
				printf("YES\n");
			}
		}
	}
}
