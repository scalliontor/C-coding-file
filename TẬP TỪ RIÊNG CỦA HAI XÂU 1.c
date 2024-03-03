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
    while (token != NULL) {
        if (!find(token, S2)) {
            printf("%s ", token);
        }
        token = strtok(NULL, " ");
    }

    return 0;
}