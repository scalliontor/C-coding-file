
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int ch[m];
    int a =1;
    for (int i = 0; i< m ;i++){
        ch[i]  = a;
        a++;
    }
    int tmp ;
    int dem;

        
    int mark = 0;  
    for ( int i = 0 ;i < n ; i++){
        if (ch[0] == m) mark = 1;
        for ( int l = 0 ; l < m ; l++){
            printf("%d",ch[l]);
        }
        if ( mark ==0){
            dem = 0;
            for ( int j = dem +1 ; j < m ; j++){
                if ( ch[dem]  < ch[j]){
                    tmp = ch[dem];
                    ch[dem] = ch[j];
                    ch[j] =tmp;
                }
                dem++;
            }
        }
        else if ( mark  == 1){
            ch[0] += 1;
        }
        
        printf("\n");
        
    }

}