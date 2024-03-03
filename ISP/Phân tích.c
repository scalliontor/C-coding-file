
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    
    scanf("%d",&n);
    int cnt = 0;
    for ( int i = 1; i <= sqrt(n); i++){
        for ( int j = i; j <= sqrt(n);j++){
            for ( int k = j; k <= sqrt(n); k++){
                if ( i*i + k*k + j*j == n){
                    cnt++;
                    printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }
    printf("%d",cnt);
}