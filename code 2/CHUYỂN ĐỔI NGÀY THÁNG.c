
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    long long int sonam  =n/365;
    long long int sotuan = (n%365) /7;
    long long int songay = (n - sonam*365 - sotuan*7);
    printf("%lld %lld %lld",sonam,sotuan,songay);

}