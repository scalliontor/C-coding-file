#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int ch[n];
    for (int i = 0; i< n; i++){
        scanf("%d",&ch[i]);
    }
    for (int i = n-1 ; i>= 0; i--){
        printf("%d ",ch[i]);
    }
}