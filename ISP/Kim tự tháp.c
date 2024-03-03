
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int n;
    scanf("%d",&n);
    int i =1;
    long long int a = 0;
    int cnt = 0;
    for (i = 1; i< n ;i++){
        a += i;
        cnt++;
        n -= a;
        if ( a> n){
            break;
        }
    }
    printf("%d",cnt);
}