#include <stdio.h>
int gcd(int a, int b)
{
	if ( b == 0){
		return a;
	}
	return gcd(b, a%b);
}


int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int temp;
	if ( a > b){
	    temp = a;
	    a = b;
	    b = temp;
	}

	int i,j,k;
	for ( i = a ; i < b ; i++){
	    for ( j = i + 1 ; j <= b ; j++){
	        if ( gcd(i,j) == 1){
	            printf("(%d,%d)\n",i,j);
	        }
	    }
	}
}
