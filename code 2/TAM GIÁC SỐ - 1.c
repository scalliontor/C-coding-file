#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    long long int k = 1;
    for (long long int i = 0; i < n ; i++){
        for ( long long int j =1; j <= k; j++){
            printf("%lld",j);
        }
        k+= 2;
        printf("\n");
    }
}