#include <stdio.h>
#include <string.h>
int find(char *word, char *str) {
    char *found = strstr(str, word);
    return (found != NULL);
}

int main() {
    char S1[100], S2[100];
    fgets(S1, sizeof(S1), stdin);
    getchar();
    fgets(S2, sizeof(S2), stdin);
    char *token = strtok(S1, " ");
    int dem = 0;
    char * kq[101];
    while (token != NULL) {
        if (!find(token, S2)) {
            int mark = 0;
            for (int i = 0 ; i < dem ; i++){
                if  ( strcmp(kq[i], token) == 0 ){
                    mark = 1;
                    break;
                }
            }
            if (mark == 0){
                kq[dem] = token;
                dem++;
            }
            
        }
        token = strtok(NULL, " ");
    }
    
    for (int i = 0 ; i <dem ; i++){
        printf("%s ",kq[i]);
    }

    return 0;
}