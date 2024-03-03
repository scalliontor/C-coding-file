#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int t;
    scanf("%d",&t);
    int id = 1;
    while(t--){
        
        int i,j,k;
        int n;
        scanf("%d",&n);
        int ch[n];
        int ck[n];
        for ( i = 0 ; i< n ; i++){
            scanf("%d",&ch[i]);
        }
        for ( i = 0 ; i< n ; i++){
            scanf("%d",&ck[i]);
        }
        printf("Test %d:\n",id);
        id++;
        int temp;
        for (i =0; i< n;i++){
		    for (j = i+1; j< n; j++){
			    if (ch[i] > ch[j]){
			    	temp = ch[i];
			    	ch [i] = ch[j];
			    	ch[j] = temp;
                }
			}
		}
        for (i =0; i< n;i++){
		    for (j = i+1; j < n; j++){
			    if (ck[i] < ck[j]){
			    	temp = ck[i];
			    	ck[i] = ck[j];
			    	ck[j] = temp;
			    }
		    }
	    }
        int a =0, b=0;
        for ( i =1; i <= n+n;i++){
            if (i % 2 != 0 ){
                printf("%d ",ch[a]);
                a++;
            }
            else{
                printf("%d ",ck[b]);
                b++;
            }
        }
        printf("\n");
	}
}