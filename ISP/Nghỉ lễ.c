
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int n;
    scanf("%d",&n);
    int ln,bn ; 
    if ( n  % 7 == 0 ){
        ln = n/7 * 2;
        bn = ln;
    }
    else if ( n >= 2 && n <= 7 ) {
        ln = 2;
        if ( n > 6){
            bn = 2;
        }
        else if ( n == 6){
            bn  =1;
        }
        else {
            bn = 0;
        }
    }
    else if ( n  == 1){
        ln = n;
        bn = 0; 

    }
    else{
        ln = n/7 * 2 ;
        bn = n/7 * 2;
        if ( n % 7 >= 2){
            ln += 2;
        } 
        else {
            ln += 1;
        }
        if ( n % 7  >= 6){
            bn += 1;
        }

    }
    printf("%d %d",bn,ln);
}