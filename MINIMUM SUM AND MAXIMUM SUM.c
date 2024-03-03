#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>



int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char ch[20];
        char ck[20];
        scanf("%s",ch);
        scanf("%s",ck);
        int i,j;
        for (i = 0; i < strlen(ch);i++){
            if (ch[i] == '6'){
                ch[i] = '5';
            }
        }

        for (i = 0; i < strlen(ck);i++){
            if (ck[i] == '6'){
                ck[i] = '5';
            }
        }
        long long int benhat = strtol(ch,NULL,10) + s  trtol(ck,NULL,10);
        for (i = 0; i < strlen(ch);i++){
            if (ch[i] == '5'){
                ch[i] = '6';
            }
        }

        for (i = 0; i < strlen(ck);i++){
            if (ck[i] == '5'){
                ck[i] = '6';
            }
        }
        long long int lonnhat = strtol(ch,NULL,10) + strtol(ck,NULL,10);
        printf("%lld %lld\n",benhat,lonnhat);


    }
}