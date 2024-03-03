
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int ch[5];
    for ( int i = 0; i < 5; i++){
        scanf("%d",ch[i]);
    }
    int solon1 = 0,solon2 = 0;
    for (int i = 0; i < 5; i++){
        if ( ch[i] > solon1 && ch[i] > solon2){
            solon2 = solon1;
            solon1 = ch[i];
        }
        else if ( ch[i] < solon1 && ch[i] > solon2){
            solon2 = ch[i];
        }
    }
    printf("%d %d",solon1,solon2);
}