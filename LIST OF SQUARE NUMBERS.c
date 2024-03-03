#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>




int main(){
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    long long int count =0;
    for ( long long int i = ceil(sqrt(a)) ; i <= sqrt(b) ; i ++){   
        count ++;
    }
    printf("%lld\n",count);
    for ( long long int i = ceil(sqrt(a)) ; i <= sqrt(b) ; i ++){   
        printf("%lld\n",i*i);
    }
}