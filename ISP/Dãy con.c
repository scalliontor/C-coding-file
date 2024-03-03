
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    long long int ch[n];
    for ( int i = 0; i< n; i++){
        scanf("%lld",&ch[i]);
    }
    int cnt = 0;
    int kq = 0;
    for (int i= 0; i < n ; i++){
        if ( ch[i] % k == 0){
            cnt++;
        }
        else{
            cnt = 0;
        }
        if (cnt < kq){
            kq = cnt;
        }
    }
    printf("%d",kq);
}