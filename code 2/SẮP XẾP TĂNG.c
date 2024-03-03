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
    int temp;
    for (int i = 0; i < n ;i++){
        for (int j = i+1; j < n; j++){
            if (ch[i] > ch[j]){
                temp = ch[i];
                ch[i] = ch[j];
                ch[j]  =temp;
            }
        }
    }
    for (int i = 0 ; i< n; i++){
        printf("%d ",ch[i]);
    }
}