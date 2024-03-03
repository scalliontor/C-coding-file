#include<stdio.h>
#include <math.h>
int main(){
	double a,b,c;
	double x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a != 0) {
	double delta = b*b - 4*a*c;	
		if (delta<0){		
			printf("NO");
		}
		else if(delta==0){
			x1 = x2 = -b/(double)(2*a);
			printf("%.2lf",x1);
		}
		else{
			delta = sqrt(delta);
			x1 = (-b + delta) /(double)(2*a);
			x2 = (-b - delta) /(double)(2*a);
			if (x1>x2){
				printf("%.2lf",x1);
				printf(" ");
				printf("%.2lf",x2);
			}
			else{
				printf("%.2lf",x2);
				printf(" ");
				printf("%.2lf",x1);
			}	
		}
	}
	else {
		if  (b==0){
			printf("NO");
		}
		else {
			printf("%.2f",-c/b);
		}
	}
	return 0;
}
	
	
