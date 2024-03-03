#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int a = 1;
    int ch[n];
    for (int i =  0; i < n ; i++){
        ch[i] = a;
        a++;
    }
    a--;
    int l = n + n - 1;
    int mark = 0;
    int tmp1 = n;
    int tmp2 = n;
    int dem = 0;
    for (int i = 0 ; i < l ; i++ ){
        
        if ( mark == 0){
            // printf("\n1=\n");
            for (int j = n-1; j >= tmp2;j--){
                printf("%d",ch[j]);
            }
            // printf("\n2=\n");
            for (int j = a -1; j > 0; j--){
                printf("%d",ch[a-1]);
            }
            // printf("\n3=\n");
            for (int j = 0; j < a-1; j++){
                printf("%d",ch[a-1]);
            }
            // printf("\n4=\n");
            for (int j = tmp2; j < n;j++){
                printf("%d",ch[j]);
            }

            tmp2--;
            a--;
            dem++;
        }
        if ( dem) mark = 1;
        else if (ch[n-1] == n){
            mark = 0;
        }
        printf("\n");

    }
}