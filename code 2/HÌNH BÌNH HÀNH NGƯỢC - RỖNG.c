
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c = 0 ;
    for ( int i = 1; i<= a; i++){
        for ( int k = 1; k<= c; k++ ){
            printf("~");
        }
        for (int j = 1 ; j <= b; j++){
            if ( i == 1 || i == a || j==1 || j== b){
                printf("*");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
        
        c++;
    }
}