
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

long long int check(long long int n){
    long long int a,b;
    a = n % 10;
    n /= 10;
    while ( n> 0){
        b = n % 10;
        if ( a < b){
            return 0;
        }
        a = b;
        n /= 10;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        if (check(n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
}
