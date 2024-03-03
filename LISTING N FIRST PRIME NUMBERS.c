#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	int i,j;
	int sl = 0;
	i= 1;
	while(i++){
		int check = 1;
		double m = sqrt(i);
		for (j = 2 ; j <= m ; j++) {
			if (i % j == 0){
				check = 0;
				break;
			}
		}	
		if (check == 1){
			printf("%d\n",i);
			sl += 1;
			if (sl ==n){
				break;
			}
		}
	}		
}

