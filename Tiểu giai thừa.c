#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int gt(int n){
    int kq = 1;
    for (int i = 2; i <= n; i++){
        kq  *= i;
    }
    return kq;
}

int kq(int n){
    int kq = gt(n);
    int sum = 0;
    while( kq > 0){
        sum += kq % 10;
        kq /= 10;
    }
    return sum;
}

int main(){
    int t;
    scanf("%d",&t);
    printf("%d\n",t);
    while(t--){

        int n;
        scanf("%d",&n);
        int dapan = kq(n);
        printf("%d\n",dapan);
    }
}