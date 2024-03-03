#include<stdio.h>
#include<string.h>
#include<math.h>
int isprime(long long n){
    if(n == 0 || n == 1) return 0;
    for(int i = 2 ; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int sum_of_digit(long long n , long long s){
    long long sum = 0;
    while(n > 0){
        long long digit = n % 10;
        sum+=digit;
        n/=10;
    }
    if(sum == s){
        return 1;
    }
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,s;
        scanf("%lld%lld",&n,&s);
        if(isprime(n) && sum_of_digit(n,s)){
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
}