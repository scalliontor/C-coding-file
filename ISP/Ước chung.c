
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int gcd( long long int a, long int b){
    if ( b == 0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}




int main() {
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    long long int tmp = gcd(a,b);
    for ( long long int i = 1; i <= tmp ; i++){
        if  (tmp % i == 0 ){
            printf("%lld ",i);
        }
    }
}