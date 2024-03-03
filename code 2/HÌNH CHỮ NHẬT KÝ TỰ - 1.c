
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a = m;
    
    int ch[m];
    int cnt = 1;
    if ( n > m){
        a  = n ;
    }
    int b= a;
    for (int i = 0; i< m ;i++){
            ch[i]  = cnt;
            cnt++;
    }
    
    int tmp = 1;
    for ( int i = 0 ;i < n; i++){
        if (tmp-1 == m){
            for (int j  =1; j < tmp;j++){
                printf("%c",'a' + b - j);
            }
            printf("\n");
        }
        else{
            for (int j = 1 ; j < tmp ; j++){
                printf("%c",'a' + b - j);
            }
            tmp++;
            for (int j = cnt - 1; j > 0; j-- ){
                printf("%c",'a'+ a -1 );
            }
            cnt--;
            a--;
            printf("\n");
        }
        
        
    }
}