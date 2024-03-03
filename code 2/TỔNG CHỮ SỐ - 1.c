
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    long long int sum = 0;
    while(n>0){
        sum += n%10;
        n/=10;
    }
    printf("%lld",sum);
}