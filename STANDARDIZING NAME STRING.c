#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int t;
    scanf("%d\n",&t);
    while(t--){
        char ch[100];
        gets(ch);
        char * token = strtok(ch, " ");
        while ( token  != NULL){
            int n  = strlen(token);
            token[0] = toupper(token[0]);
            for (int  i = 1; i  <n ; i++){
                token[i] = tolower(token[i]);
            }
            printf("%s ",token);
            token = strtok(NULL, " ");
        }
        printf("\n");
    }
}