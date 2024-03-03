#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int t;
    scanf("%d\n",&t);
    while(t--){
        char ch[501],ck[501];
        gets(ch);
        gets(ck);
        long long int chn = strlen(ch);
        long long int ckn = strlen(ck);
        long long int n = chn;
        if (chn < ckn){
            n = ckn;
        }
        int a[501] = {0},b[501] = {0}, kq[501];
        for(int i = strlen(ch) - 1; i >= 0; i--){
			a[chn - 1 - i] = ch[i] - '0';
		}
		for(int i = strlen(ck) - 1; i >= 0; i--){
			b[ckn - 1 - i] = ck[i] - '0';
		}

        int sum = 0, nho = 0;
        for(int i = 0; i < n; i++){
			sum = a[i] + b[i] + nho;
			if(sum >= 10){
				nho = 1;
				sum -= 10;
			} else {
				nho = 0;
			}
			kq[i] = sum;
		}
        if ( nho == 1){
            kq[n] = 1;
            n++;
        }

        for (int i = n-1 ; i >= 0 ;i--){
            printf("%d",kq[i]);
        }
        printf("\n");
    }
}