
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    long long int ch[n];
    for( int i =0; i < n ; i++){
        scanf("%d",&ch[i]);
    }
    int i,j,k,temp,l;
    for ( i = 0;i < n-1;i++){
		for ( j= i+1 ;j<n;j++){
			if(ch[i]>ch[j]){
				temp = ch[i];
				ch [i] = ch[j];
				ch[j] = temp;
			}
        }
    }
    for ( l=0;l<n;l++){
			printf("%d ",ch[l]);
	}
    int mark =0;
    for (  i =0 ; i < n -2; i++){

        for ( j = i+1 ; j < n-1; j++){
            if ( ch[i] < ch[j] + ch[j+1]){
                printf("CO");
                mark =1;
                break;
            }
        }
        if ( mark ==1) break;
    }


}