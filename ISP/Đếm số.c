
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if ( a > b){
        int temp =a;
        a = b;
        b = temp;
    }
    int ch[b-a+1];
    int cnt = 0;
    for (int i = a; i <=b; i++ ){
        if ( i % 2== 0){
            ch[cnt] = i;
            cnt++;
        }
    }
    printf("%d\n",cnt);
    for ( int i = 0 ;i < cnt; i++){
        printf("%d ",ch[i]);
    }
}