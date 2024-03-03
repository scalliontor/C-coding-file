#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int t,m = 1;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int ch[n];
        int i,j,k;
        for ( i= 0 ; i< n ; i++){
            scanf("%d",&ch[i]);
        }

        printf("Test %d:\n",m);
        m ++;
        for (i = 0; i<n; i++){
            int count = 1;
            int mark = 1;
            for (j = 0 ; j<i ; j++){
                if (ch[i] == ch[j]){
                    mark = 0;
                    break;
                }
            }
            if (mark == 1){
                for (j = i +1; j < n; j++){
                    if (ch[i] == ch[j]){
                        count ++;
                    }
                }
                printf("%d appears %d times\n",ch[i],count);
            }
        }
        
    }
}