
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char a[1000000];
    fgets(a,sizeof a, stdin);
   
    int n = strlen(a);

    a[n-1] = '\0';
    int dem = 0 ;
    for (int i = 0 ;i < n; i++){
        if ( a[i] == " " && a[i+1] == " "){
            dem++;
            for (int j = i; j< n ;j++){
                a[j]=a[j+1];
            }
        }
    }
	for(int i=0;i<(n-dem);i++){
		printf("%c",a[i]);
	}
    return 0;
}