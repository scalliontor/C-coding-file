#include <stdio.h>
long long int a,b ;
long long int ucln(a,b){
    while (a != 0){
        long long int c = a;
        a = b % a;
        b = c;
    }
    return b;
}
long long int bcnn(a,b){
   	return (a * b) / ucln(a, b); 
}
int main(){
        long long int a, b;
        scanf("%lld%lld", &a, &b);
        printf("%lld\n%lld", ucln(a, b), bcnn(a,b));
}