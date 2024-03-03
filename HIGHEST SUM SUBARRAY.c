#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
        long long int i,j,k = 1;
        int n;
        scanf("%d",&n);
        long long int  ch[n];
        for ( i = 0 ; i< n ; i++){
            scanf("%lld",&ch[i]);
        }
        long long int kq = ch[0], tmp = 0;
        for ( i = 0; i<n;i++  ){
            tmp += ch[i];
            if ( kq < tmp){
                kq = tmp;
            }
            if ( tmp < 0){
                tmp =0;
            }
        }
        printf("%lld\n",kq);

        
    



    }
}