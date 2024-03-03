#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n,i;
		int chan=0,le=0;
		scanf("%d",&n);
		while (n>0){
			i = n % 10;
			if (i % 2== 0){
				chan += 1;
			}
			else{
				le += 1;
			}
			n /= 10;
		}	
		printf("%d %d",le,chan);
		printf("\n");	
	}
}
