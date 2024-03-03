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
        int n;
        scanf("%d",&n);
        int ch[n-1];
        int i,j,k;
        for ( i = 0; i < n -1 ; i++){
            scanf("%d",&ch[i]);
        }
        for ( i = 1; i <= n ; i++){
            int mark = 0; 
            for ( j =0; j < n - 1 ; j++){
                if ( i == ch[j]) {
                    mark = 1;
                    break;
                }
                
            }
            if ( mark == 0) {   
                printf("%d\n",i);
                break;
            }
        }
        
    }
            
        
}
