
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int cnt =1;
    while ( n != 1){
        if ( n % 3 == 0) {
            n = n /3;
            cnt++;
        }
        else{
            if ( (n+1) % 3 == 0){
                cnt += 2;
                n = (n+1)/3; 
            }
            else if ((n-1) % 3 ==0){
                cnt += 2;
                n = (n-1)/3;
            }
        }
    }
    printf("%d",cnt);
}