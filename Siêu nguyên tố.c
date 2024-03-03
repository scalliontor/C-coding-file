#include<stdio.h>
#include<math.h>

int prime( int n){
    int i,j,k;
    if ( n < 2) return 0;
    for ( i = 2; i <= sqrt(n) ; i ++){
        if ( n % i == 0) return 0;
    }
    return 1;
}

int fibo( int n) {
    if  ( n <= 3){
        return 1;
    }
    int a= 0 , b= 1, c = 1;
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

int check( int n){
    if (fibo(n) && prime(n)) return 1;
    return 0;
}

int main(){
        int b;
        scanf("%d",&b);
        for ( int i = 2; i<= b; i++){
            if (check(i)) printf("%d\n",i);
        }
}