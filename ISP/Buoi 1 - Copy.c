
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int ch[n],ck[k];
    int i,j;
    for ( i = 0; i < n ; i++){
        scanf("%d",&ch[i]);
    }
    for ( i = 0 ;j < k ; j++){
    	printf("aaaaa");
        scanf("%d",&ck[j]);
    }
    

    //
    for ( i = 0 ; i < k ;i++){
        for (  j = 0 ;  j < n ; j++){
            if ( j+1 != ck[i]) {
            	printf("aaaaa");
                ch[j]++;
            }
        }
    }
    

    for ( i = 0; i < n ; i++){
    	printf("in:");
        printf("%d ",ch[i]);
    }
}
