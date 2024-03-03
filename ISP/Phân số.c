
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
long long int gcd(long long int  A, long long int B)
{
    if (B == 0)
        return A;
    else 
        return gcd(B, A % B);
}

int main(){
    long long int a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    long long int f =  (b * d)/ gcd(b,d);
    long long int e = (a * f/b) + (c * f/d);
    long long int n = gcd(e,f);
    if ( n == 1){
        printf("%lld %lld",e,f);
    }
    else{
        printf("%lld %lld",e/n,f/n);
    }

}