#include<stdio.h>
#include<math.h>

unsigned long long int prime( unsigned long long int n){
    unsigned long long int i,j,k;
    if ( n < 2) return 0;
    for ( i = 2; i <= sqrt(n) ; i ++){
        if ( n % i == 0) return 0;
    }
    return 1;
}

unsigned long long int fibo( unsigned long long int n) {
    if  ( n <= 3){
        return 1;
    }
    unsigned long long int a= 0 , b= 1, c = 1;
    while( c < n){
        a = b;
        b = c;
        c = a + b;
    }
    if ( c == n){
        return 1;
    }
    return 0;
}

unsigned long long int check( unsigned long long int n){
    if (fibo(n) && prime(n)) return 1;
    return 0;
}

unsigned long long int main(){
        unsigned long long int b;
        scanf("%llu",&b);
        for ( unsigned long long int i = 2; i<= b; i++){
            if (check(i)) printf("%llu\n",i);
        }
}