
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for ( int i = 1 ; i <= a; i++){
        for ( int j = 1; j <= a; j++){
            if (i > a-b && j > a-b){ 
                break;
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
}