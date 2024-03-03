#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int check(int n){
    while(n > 0){
        int r = n % 10;
        if ( r == 0 || n % r != 0){
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    int cnt = 0;
    
    for (int i = 10; i <= n; i++){
        if (check(i)){
            cnt++;
        }
    }
    printf("%d\n", cnt);
}