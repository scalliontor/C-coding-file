#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>



int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int kq = 1;
        for (int i = 2; i <= n ; i++){
            if ( n % i == 0){
                kq *= i;
                while( n % i ==0){
                    n /= i;
                }
            }
        }
        printf("%d\n",kq);
    }
}