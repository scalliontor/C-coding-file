
#include<stdio.h>


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int ch[n-1];
        int kq[100] = {0};
        for ( int i = 0 ;i< n -1; i++){
            scanf("%d",&ch[i]);
            kq[ch[i]] += 1;
        }
        for ( int i = 1; i < ch[n] ; i++){
            if (!kq[i]){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}