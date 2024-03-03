#include<stdio.h>
int main(){
	int a,b;
	double ketqua;
	scanf("%d%d",&a,&b);
	if (a==0 && b==0){
		printf("Infinite solutions");
	}
	else if (a==0) {
		printf("No solution");
	}
	else{
		ketqua = (0-b)/(double)a;
		printf("%.2lf",ketqua);
	}
	return 0;
}
