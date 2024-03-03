#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
int check ( int n){
    if ( n == 1) return 1;
    int cnt =0 ;
    int i;
    for (  i  = 1;  i <= sqrt(n) ; i++){
        if (n % i == 0){
            cnt+= 2;
        }
    }
    int x =sqrt(n);
    if ( x*x == n){
        cnt--;
    }
    if ( n % cnt == 0){
        return 1;
    }
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if (check(n)){
            printf("Co\n");
        }
        else{
            printf("Khong\n");
        }
    }
}