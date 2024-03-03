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
    int sum =0;
    int tmp = n;
    while ( n > 0){
        sum += n % 10;
        n /= 10;
    }
    if (fibo(sum) && prime(tmp)) return 1;
    return 0;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int temp;
    if( a > b){
        temp = a;
        a = b;
        b = temp;
    }
    for ( int i = a; i<= b; i++){
        if (check(i)) printf("%d ",i);
    }
}