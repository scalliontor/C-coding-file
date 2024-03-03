#include <stdio.h>
#include <math.h>

int main() {
	int n,i,st;
	double a;
	scanf("%d",&n);
	for	(i =0; i<n; i++) {
		scanf("%d",&st);
		a = sqrt(st);
		if (ceil(a) != floor(a))   {
			printf("NO\n");	
		}
		else {
			printf("YES\n");		
		}
	}
	return 0;	
}
