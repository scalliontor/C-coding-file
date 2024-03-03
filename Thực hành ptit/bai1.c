/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        int ch[n];
        int i,j;
        for (i =0 ; i< n ; i++ ){
            scanf("%d",&ch[i]);
        }
        int kq = 0;
        for (i = 0; i < n  ; i++){
            kq += ch[i];
        }
        
        for (i = 0; i < n - k + 1 ; i++){
            int tmp = i;
            int sum = 0;
            for ( j = 0; j < k ; j++){
                sum += ch[tmp];
                tmp++;
            }
            if (sum <= kq){
                kq = sum;
            }
        }
        printf("%d\n",kq);
    }
}
