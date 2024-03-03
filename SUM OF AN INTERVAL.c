#include <stdio.h>
int main(){
	int a,b;
	int sl,sb;
	int i;
	int sum =0 ;
	scanf("%d%d" ,&a,&b);
	if (a>b){
		sl = a;
		sb = b;
	}
	else{
		sl = b;
		sb = a;
	}
	for (i = sb; i<= sl; i++ ){
		sum += i;
	}
	printf("%d", sum);
}
