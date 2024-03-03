#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int t;
    scanf("%d\n",&t);
    while(t--){
        char ch[501];
        gets(ch);
        char rv[501];
        int check = 0;
        long long int n = strlen(ch);
        for (int i = 0 ; i <  n ; i ++){
            rv[n - i - 1] = ch[i];
        }
        for (int i = 0 ; i < n; i++){
            long int num = ch[i] - '0';
            if (num % 2 != 0 || ch[i] != rv[i]) {
                check  = 1;
                break;
            }
        }
        if (check == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}