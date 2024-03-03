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
        int check = 1;
        long long int n = strlen(ch);
        long long int sum = 0,num;
        for (int i = 0 ; i < n;i++){
            num = ch[i] - '0';
            sum += num;
        }
        num  = ch[n-1] - '0';
        if (sum % 10 != 0 || num != 8 ){
            check = 0;
        }
        if (check){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}