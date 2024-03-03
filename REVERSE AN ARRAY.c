#include<stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d",&n);
	int mynum[n];
	for (i = 0; i< n; i++){
		int a;
		scanf("%d",&a);
		mynum[i]=a;
	}

//	int j,k,lon;
//	j = 0;
//	k = n-1;
//
//	int abc = n/2;
//	while (abc --) {
//		lon = mynum[j];
//		mynum[j] = mynum[k-j];
//		mynum[k-j] = lon;
//	}
//	
//	
	
	int b;
	for (b = n-1; b>=0;b--){
		printf("%d ",mynum[b]);
	}

}
