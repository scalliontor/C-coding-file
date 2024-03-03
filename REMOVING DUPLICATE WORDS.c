#include <stdio.h>
#include <string.h>
int main()
{
	char ch[101];
    gets(ch);
    char * token = strtok(ch, " "); 
    char * kq[101]; 
    int dem = 0;
    while (token != NULL){
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
        token = strtok(NULL, " ");

    }
    for (int i = 0 ; i <dem ; i++){
        printf("%s ",kq[i]);
    }
}
