
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
int check(long long int n){
    long long int sum = 0;
    while (n>0){
        sum  += n % 10;
        n /= 10;
    }
    if ( sum % 10 == 0) return 1;
    return 0;
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