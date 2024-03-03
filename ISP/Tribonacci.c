
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

long long int check( long long int n){
    if ( n <= 2){
        return 1;
    }
    long long int a = 0, b= 0, c =1;
    long long int sum = 0;
    while ( sum < n){
		a = b;
        b = c;
        c = sum;
        sum = sum+ a+ b+c;
        
    }
    if ( sum ==n) return 1;
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        if (check(n)) printf("YES\n");
        else{
            printf("NO\n");
        }
    }
}