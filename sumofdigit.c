#include <stdio.h>
//#include <string.h>
/*int main() {
	int n,i, th;
	int ketqua;
	int j;
	char a;
	scanf("%d",&n);
	for (i =0 ; i < n ; i++) {
		scanf("%d",&th);
		printf("%d",strlen((char)(th)));
		ketqua = 0;
		for (j =0; j <(int)a; j++) {
			ketqua = ketqua + th%10;
			th = th / 10;
		}
		printf("%d",ketqua);
	}
}*/
/*int main() {
	int n,i;
	int sum,a,so;
	scanf("%d",&n);
	so = n;
	for 
	for (i =0;i<n;i++){
		a = so % 10;
		sum += a;
		so /= 10;
		printf("%d",sum);
	}
	printf("dap an =%d",sum);
}*/
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, sum = 0, a;
        scanf("%d", &n);
        while(n>0)  
        {
            a = n % 10;
            sum += a;
            n /= 10;
        }
        printf("%d\n", sum);
    }
}
