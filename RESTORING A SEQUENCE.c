#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int n;
    scanf("%d",&n);
    int ch[n][n];
    for (int i = 0; i< n; i++){
        for (int j = 0 ;j< n; j++){
            scanf("%d",&ch[i][j]);
        }
    }
    int kq[n];
    int a = 0;
    if( n ==2){
        kq[0] = 1;
        kq[1] = 1;
    }
    else{
        for (int i =0; i< n ;i++){
            for (int j = i ;j< n;j++){
                if (i == j){
                    continue;
                }
                else if (a < n/2 && n % 2 == 0){
                    kq[a] = (ch[i][j+1] + (ch[i][j]-ch[j+1][i+1]) )/2;
                    if (a + 2 < n){
                        kq[a+2] = ch[i][j+1] - kq[a];
                    }
                    a++;
                    break;
                }
                else{
                    kq[a+2] = ch[i][j+1] - kq[a];
                    break;
                }
            }
        }
    }
    for (int i = 0; i< n; i++){
        printf("%d ",kq[i]);
    }
}