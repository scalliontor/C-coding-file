
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    int i,j,k;
    for ( i = 1; i <= b; i++){
        for ( j = 1; j <= a; j++){
            if ( i == 1 || i == b || j==1 || j==a ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}