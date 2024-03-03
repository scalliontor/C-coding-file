#include<stdio.h>
int main(){
	int i,count,n;
	double ketqua;
	scanf("%d", &count);
	for (i = 0 ; i<count ; i++) {
		scanf("%d",&n);
		ketqua= 1/(double)n;
		printf("%.15lf\n",ketqua);
	}
	return 0;
}	
