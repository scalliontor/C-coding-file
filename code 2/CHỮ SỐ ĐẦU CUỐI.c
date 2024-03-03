
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
long long int rv(long long int n){
    int rv  = 0;
    while( n > 0){
        rv = rv * 10 + n%10;
        n /= 10;
    }
    return rv%10;
}
int main(){
    long long int n;
    scanf("%lld",&n);
    printf("%lld %lld",rv(n),n%10);
}