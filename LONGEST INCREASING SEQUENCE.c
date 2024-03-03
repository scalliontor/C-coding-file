#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int t;
    scanf("%d",&t);
    int id = 1;
    while(t--){
        
        int i,j,k;
        int n;
        scanf("%d",&n);
        int ch[n];
        for ( i = 0 ; i< n ; i++){
            scanf("%d",&ch[i]);
        }
        printf("Test %d:\n",id);
        id++;
        
        int m = 0;
        for (i = 0 ; i < n; i++){
            int tmp = ch[i];
            int dem = 1;
            for ( j = i+1; j< n; j++){
                if (tmp < ch[j]){
                    tmp = ch[j];
                    dem ++;
                }
                else{
                    break;
                }
            }
            if ( dem > m){
                m = dem;
                i = j - 1;
            }
        }
        printf("%d\n",m);

        for ( i = 0 ; i< n ; i++){
            int tmp = ch[i];
            int dem = 1;
            for ( j = i+1; j< n; j++){
                if (tmp < ch[j]){
                    tmp = ch[j];
                    dem ++;
                }
                else{
                    break;
                }
            }
            if ( dem == m){
                for (;i< j;i++){
                    printf("%d ",ch[i]);
                }
                i = j - 1;
                printf("\n");
            }
        }
        printf("\n");


    }
}