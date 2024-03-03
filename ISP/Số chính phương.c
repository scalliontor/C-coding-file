
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        double m =sqrt(n);
        if ( ceil(m) == floor(m)) printf("1\n");
        else{
            printf("0\n");
        }
    }
}