#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

long long int findm( long long int a, long long int b,long long int n) {
    if ( a % b == 0) return -1;
    long long int m = ((n/ a) * a) ;
    while ( m < n){
        m += a;
    }
    for ( long long int i = m ; ; i += a){
        if (i % a == 0 && i % b != 0) return i;
    }
    
    

}


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a,b,n;
        scanf("%lld%lld%lld",&a,&b,&n);
        long long int result = findm(a,b,n);
        printf("%lld\n",result);
    }
        
}