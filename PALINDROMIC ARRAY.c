#include<stdio.h>
int main()
{
	int t,i;

	scanf("%d",&t);
	while (t--){
		int amount;
		scanf("%d",&amount);
		int mynumber[amount];
		for (i =0;i <amount;i++){
			int a;
			scanf("%d",&a);
			mynumber[i]=a;
		}
		int n,m,a;
		n = 0;
		m = amount-1;
		while (amount--)
			if ( mynumber[n] != mynumber[m]){
				printf("NO\n");
				break;
			}
			else if ( (m == n || m - n == 1) && mynumber[n] == mynumber[m]){
				printf("YES\n");
				break;
			}
			else{
				n ++;
				m --;
				}	
	}
} 

