#include <stdio.h>
#include <string.h>
int main()
{
	char ch[101],ck[101];
    gets(ch);
    gets(ck);
    char * token = strtok(ch," ");    
    while (token != NULL){
        if (strcmp(ck,token)!= 0){
            printf("%s ",token);
        }
        token = strtok(NULL, " ");
    }
}
