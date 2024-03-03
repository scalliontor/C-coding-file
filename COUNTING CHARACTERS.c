#include <stdio.h>
#include <string.h>
int main()
{
	// int t;
    // scanf("%d",&t);
    // getchar();
    // while(t--){
        char a[200];
        gets(a);
        int n = strlen(a);
        int cntso = 0,cntchu = 0,cntkhac = 0;
        for (int i = 0 ; i < n ; i++ ){
            if ( isdigit(a[i]) ){
                cntso++;
            }
            else if ( isalpha(a[i]) ){
                cntchu++;
            }
            else{
                cntkhac++;
            }
        }
        printf("%d %d %d\n",cntchu,cntso,cntkhac);

    // }
}
