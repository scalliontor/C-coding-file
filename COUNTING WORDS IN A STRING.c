#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d\n",&t);
	getchar();
	while(t--){
		char vao[200];
		gets(vao);
		// int dem = strlen(vao);
        char * token = strtok(vao, " ");
        int count = 0;
        while (token != NULL){
            count++;
            token = strtok(NULL, " ");
        }
		// int count= 1;
		// int i;
		// for ( i= 0; i < dem -1 ; i++){
		// 	if (vao[i] == ' ' && vao[i+1] != ' ' ){
		// 		count ++;
		// 	}
		// }   đọc về token vs string đi

		printf("%d\n",count);
		
	}
}
