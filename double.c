
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    long long int n,k;
    scanf("%lld",&n);
    scanf("%lld",&k);
    long long int ch[n],ck[k];
    int i,j;
    for ( i = 0; i < n ; i++){
        scanf("%lld",&ch[i]);
    }
    for ( i = 0 ;j < k ; j++){
//    	printf("aaaaa");
        scanf("%lld",&ck[j]);
    }
    for ( i = 0; i < k ; i++){
        printf("ck = %lld",ck[i]);
    }

    //
    for ( i = 0 ; i < k ;i++){
        for (  j = 0 ;  j < n ; j++){

            if ( j+1 != ck[i]) {
            	ch[j]++;
            }
            if ( ck[i] == 1 ){
            	printf("j= %d %d\n",j,ck[i]);
			}
        }
    }
    

    for ( i = 0; i < n ; i++){
//    	printf("in:");
        printf("%lld ",ch[i]);
    }
}
