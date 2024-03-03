
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int i,j,k;
    for ( i = 1; i <= n; i++){
        for ( j = 1; j <= n; j++){
            if ( i == 1 || i == n || j==1 || j== n){
                printf("*");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
}