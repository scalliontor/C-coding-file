
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    if (b==0) printf("0");
    else{
    printf("%lld %lld %lld %.2lf %lld",a+b,a-b,a*b,(double)a/b,a%b);
    }
}