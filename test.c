#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int n;
    int dema = 0;
    int demb = 0;
    char ten[200];
    char diem[200];
    int sten = 0;
    int sdiem  = 0;
    int ai[200];
    int bi[200];
    while ( scanf("%d",&n) == 1 || scanf("%d",&n) == 2 ){
        switch(n){
            case 1:
                int t;
                scanf("%d",&t);
                getchar();
                while(t--){
                    char a[200];
                    char b[200];
                    gets(a);
                    gets(b);
                    for ( int i = 0 ; i < strlen(a) ; i++){
                        ten[sten] = a[i];
                        sten++;
                        a[i] = "";
                    }
                    
                    ai[dema] = sten;
                    dema++;
                    for ( int i = 0 ; i < strlen(b) ; i++){
                        diem[sdiem] = b[i];
                        sdiem++;
                        b[i] = "";
                    }
                    bi[demb] = sdiem;
                    demb++;
                }
                break;
            case 2:
                int n;
                scanf("%d",&n);
                ai[n-1];
                break;
            case 3: 
                break;
        }
    }
}