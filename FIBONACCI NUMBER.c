#include<stdio.h>
int main()
{
	int t; 
	scanf("%d",&t);
	while(t--){
		long a = 0, b=1;
		long F = a + b;
		int n,i;
		scanf("%d",&n);
		if (n <= 0) printf("0\n");
		else if (n == 1) printf("1\n");
		else{
			for ( i =3 ; i <= n ; i++){
				a =b;
				b = F;
				F = a + b;
			}
			printf("%ld\n",F);
		}
	}
}
