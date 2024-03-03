#include <stdio.h>
#include <math.h>
int primecheck(int n){
}
int main(){
	int n;
	scanf("%d", &n);
	int i,j;
	for (i = 2 ;i <n;i++){
		int check = 1;
		double m = sqrt(i);
		for ( j = 2 ; j <= m ; j++){
			if (i % j == 0){
				check = 0;
				break;
			}
		}	
		if (check == 1){
			printf("%d\n",i);
		}
	}		
}	
