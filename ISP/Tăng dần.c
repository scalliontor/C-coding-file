
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>




int main(){
    int n,x;
    scanf("%d%d",&n,&x);
    int ch[n];
    for (int i = 0; i < n;i++){
        scanf("%d",&ch[i]);
    }
    int mark;
    if (ch[0] % 2== 0){
        mark = 1;
    }
    else{
        mark =0;
    }
    int temp;
    for (int i = 1; i < n; ++i) {
        if (mark == 1) {
            if (ch[i] % 2 != 0){
                printf("-1");
                break;
            }
        }
        else if ( mark == 0){
            if (ch[i] % 2 == 0){
                printf("-1");
                break;
            }
        }
        if (ch[0] < ch[i]) {
             temp = ch[0];
            ch[0] = ch[i];
            ch[i] = temp;
        } 
    }
    int cnt = 0;
    for ( int i = 1; i< n; i++){
        while ( ch[i] != ch[i]){
            cnt++;
            ch[i] += x;
        }
    }
    if (cnt) printf("%d",cnt);
    else{
        printf("-1");
    }
    
}