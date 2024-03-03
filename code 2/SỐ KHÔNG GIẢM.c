
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

long long int check(long long int n){
    long long int a,b;
    while ( n> 0){
        a = n % 10;
        n /= 10;
        b = n % 10;
        if ( a  < b){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int dau,cuoi = 10;
        for (int i  = 1; i < n; i++ ){
            cuoi *= 10;
        }
        dau = cuoi/10;
        for (long long int i = dau; i < cuoi ; i++){
            if (check(i)){
                printf("%lld ",i);
            }
        }
        printf("\n");
    }
}
