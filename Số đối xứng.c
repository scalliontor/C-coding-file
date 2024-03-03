#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int check( long long int  n){
    long long int a = 0,b = n;
    while( b> 0){
        a = a * 10 +b%10;
        b /= 10;
    }
    if ( a == n){
        return 1;
    }
    return 0;
}


int main(){
    long long int n;
    scanf("%lld",&n);
    if ( check(n)){
        printf("CO");
    }
    else{
        printf("KHONG");
    }
}