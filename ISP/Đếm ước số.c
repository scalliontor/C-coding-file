
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    long long int n;
    long long int cnt =0;
    scanf("%lld",&n);
    for (long long int i  = 1 ; i <=sqrt(n); i++){
        if (  n % i == 0){
            if ( n/i == i){
                cnt ++;
            }
            else{
                cnt += 2;
            }
        }
    }
    printf("%lld",cnt);

}