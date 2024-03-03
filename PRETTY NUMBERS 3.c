#include<stdio.h>
#include<math.h>

int dao(long long int n){
    long long int rv = 0,tmp = n;

    while( tmp > 0 ){
        rv = rv * 10 + tmp%10;
        tmp /= 10;
    }
    if( rv == n)return 1;
    return 0;
}



int check(long long int n){
    long long int sum =0;
    int check = 0;
    while(n>0){
        sum  += n % 10;
        if ( n % 10 == 6 ) check =1;
        n /= 10;
    }

    if ( sum % 10== 8 && check  == 1  ) return 1 ;
    return 0;


}

int main(){
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    long long int tmp;
    if (a > b){
        tmp =a;
        a =b;
        b = tmp;
    }
    for ( long long int i = a; i <= b; i++){
        if (check(i) && dao(i) ) printf("%lld ",i);
    }
}