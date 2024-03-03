
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>


unsigned long long int check(unsigned long long int n){
    unsigned long long int m = n%10;
    n /= 10;
    while (n> 0){
        if (m < n%10){
            return 0;
        } 
        m = n%10;
        n /= 10;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned long long int n;
        scanf("%llu",&n);
        if (check(n)) printf("YES\n");
        else{
            printf("NO\n");
        }
    }
}