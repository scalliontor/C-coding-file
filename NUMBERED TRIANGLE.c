#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j,k;
    int a = 1;
    for (i = 1 ; i <= n; i++){
        int b = a + i  - 1;
        for (j = 1 ; j <= i ; j ++){
            if ( i % 2 != 0){
                printf("%d ",a);
                a++;
            }
            else{
                printf("%d ", b);
                b--;
                a++;
            }
        }
        printf("\n");
    }
}