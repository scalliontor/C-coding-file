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
        int cnt = 0;
        for (int i = 1; i <= sqrt(n); i++){
            if ( n% i == 0 && i % 2 ==0){
                cnt++;
            }
            if ( (n/i)% 2 == 0 && n % i == 0){
                cnt++;
            }
        }
        int x =sqrt(n);
        if ( x*x == n && n % 2== 0){
            cnt--;
        }
        printf("%d\n",cnt);
    }
}