#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int mynum[n];
	int i,j;
	for (i = 0; i< n; i++){
		int a;
		scanf("%d",&a);
		mynum[i]=a;
	}
	int chan[n], le [n];
	int sochan = 0, sole = 0;
	for (j = 0; j< n; j++){
		if (mynum[j] % 2 == 0){
			chan[sochan] = mynum[j];
			sochan ++;
		}
		else{
			le[sole] = mynum[j];
			sole++;
		}
	}
	int b,c;
	for (b = 0; b <sochan ; b++){
		printf("%d ", chan[b]);
	}
	printf("\n");
	for (c = 0; c <sole ; c++){
		printf("%d ", le[c]);
	}
}
