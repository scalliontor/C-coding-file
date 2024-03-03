#include <stdio.h>
#include<math.h>


int prime( unsigned long long int i){
    if ( i < 2){
        return 0;
    }
    for ( unsigned long long int j = 2; j <= sqrt(i) ; j ++){
        if (i%j == 0){
            return 0;
        }
    } 
    return 1;
}

void check(unsigned long long int a, unsigned long long int b){
    unsigned long long int i,j,k;
    unsigned long long int count = 0;
    unsigned long long int tmp;
    for ( i =a ; i <=b ;i++){
        int mark =1;
        if (!prime(i)){
            continue;
        }
        k = i;
        while ( k > 0){
            tmp  = k %10;
            if ( prime(tmp) == 0 ){
                mark = 0;
                break;
            }
            k /= 10;
        }
        if ( mark == 1){
            printf("%d ",tmp);
        }
    }
    printf("\n");
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned long long int a,b;
        scanf("%llu%llu",&a,&b);
        check(a,b);
    }
}