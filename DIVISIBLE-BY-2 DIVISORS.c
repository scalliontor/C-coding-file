#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int count =0;
        int i;
        for ( i = 1; i<= sqrt(n); i++){
            if (n%i == 0 && i % 2== 0){
  
                count++;
            }
            if( (n/i)%2 == 0 && n/i == 0) {
                count ++;
            } 
        }
       
        i--;
        if ( i*i==n && i%2==0){
            count--;

        }
        printf("%d\n",count);
    }
}
