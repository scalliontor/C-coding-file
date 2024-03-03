
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
unsigned long long gt( int n){
    unsigned long long s  =1;
    for ( int i = 1 ; i<= n; i++){
        s *= i;
    }
    return s;
}

int main(){
    int a;
    scanf("%d",&a);
    unsigned long long n = gt(a);
    int cnt  = 0;
    while (n % 2 == 0) {

        n /= 2;
        cnt++;
    }
    printf("%d ",cnt);
    for ( unsigned long long i =3; i*i<= n;i += 2){
        cnt  = 0;
        while ( n % i == 0){
            n /= i;
            cnt++;
        }
        if (cnt != 0) { 
            printf("%d ",cnt);
        }
    }
    if (n> 2){
        printf("1");
    }
}