#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>


int check(int n){
    if(n< 2) return 0;
    for (int i = 2 ; i <= sqrt(n); i++){
        if (n % i==0) return 0;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int ch[n];
        int i,j,k;
        for ( i= 0 ; i< n ; i++){
            scanf("%d",&ch[i]);
        }
        for ( i =0 ; i< n ; i++){
            if (check(ch[i])) printf("%d ",ch[i]);
        }
        printf("\n");

    }
}