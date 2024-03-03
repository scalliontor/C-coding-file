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
    while(n>0){
        sum  += n % 10;
        n /= 10;
    }
    if ( sum % 10== 0) return 1;
    return 0;


}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int b = 1,a;
        for ( int i = 0 ; i< n; i++){
            b *= 10;
        }
        a =b/10;
        int count=0;
        for ( long long int i = a ; i <= b; i++){
            if ( check(i) && dao(i)) count++;
        }
        printf("%d\n",count);
    }
}