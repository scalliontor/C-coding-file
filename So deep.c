
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int check ( int n){
    int sum  = 0;
    for (int i = 1 ; i< n ;i++){
        if ( sum == n ) return 1;
        else if (sum > n) return 0;
        sum += i; 
    }
}

int main() {
    int n;
    int cnt =0;
    scanf("%d",&n);
    for ( int i = 2 ; i<= n ;i++){
        if (check(i)){
            cnt++;
        }
    }
    printf("%d",cnt);

}