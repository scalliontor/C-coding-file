
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    long long int n,k;
    scanf("%lld",&n,&k);
    long long int ch[n];
    int i,j;
    for ( i = 0; i< n ;i++){
        scanf("%lld",&ch[i]);
    }
    long long int ck[k];
    for (i = 0 ; i < k ; i++){
        scanf("%lld",&ck[i]);
    }
    

    //
    for ( i = 0 ; i< k ;i++){
        for (  j = 0 ;  j < n ; j++){
            if ( j+1 != ck[i]) {
                ch[j]++;
            }
        }
    }
    

    for ( i = 0; i < n ; i++){
        printf("%lld ",ch[i]);
    }
}

