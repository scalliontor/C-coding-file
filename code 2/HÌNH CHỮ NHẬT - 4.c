
    #include<stdio.h>
    #include<math.h>
    #include <string.h>
    #include <stdlib.h>

    int main(){
        int n,m;
        
        scanf("%d%d",&n,&m);
        int ch[m];
        int a= 1;
        int cnt = 1;
        if ( n >m){
            cnt  = n - m + 1;
        }
        
        for (int i = 0; i< m ;i++){
            ch[i]  = cnt;
            cnt++;
            a++;
        }
        a--;
        int tmp = 0 ;
            
        int mark = 0;  
        for ( int i = 0 ;i < n ; i++){
            if (ch[a-1] == m) mark = 1;
            
            if ( mark  == 0){
                for ( int l = m - 1 ; l >= 0 ; l--){
                    printf("%d",ch[l]);
                }
                for ( int  l = m - 1 ; l>= 0 ;l--) {
                    ch[l]--;
                }
            }

            else if ( mark == 1 ){
                for ( int l = a - 1  ; l >= 0 ; l--){
                    printf("%d",ch[l]);
                }
                for ( int l = 1 ; l <= tmp ; l++){
                    printf("%d",ch[l]);
                }
                a--;
                tmp++;
            }
            printf("\n");
        }
            
    }
