#include<stdio.h>
int main() {
    int n,m ;
    float divide;
    scanf("%d%d", &n,&m);
    if ( m == 0)
        printf("0");
    else{
    	divide = n / (float)m;   
		printf("%d ",n+m );
		printf("%d ",n-m );
        printf("%d ",n*m );
        printf("%.2f ",divide );
        printf("%d ", n%m);
    }
    return 0;
}
