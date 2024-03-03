
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    long long int m = n;
    long long int a,b;
    int cnt,kq = 0;
    for ( long long int i = 1; i < n ; i ++){
        cnt =0;
        for (long long int j = 1; j< n; j++){
            cnt++;
            if ( i* j == n ){
                break;
            }
            else if ( i * j > n){
                cnt =0;
                break;
            }
        }
        if ( kq < cnt){
            kq  =cnt;
        }
    }
    printf("%d",kq);
}