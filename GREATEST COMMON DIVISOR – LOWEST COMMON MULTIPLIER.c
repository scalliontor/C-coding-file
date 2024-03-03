#include <stdio.h>
#include<math.h>
long long gcd_euclid(long long A, long long B)
{
    if (B == 0)
        return A;
    else 
        return gcd_euclid(B, A % B);
}

int main(){
	long a,b;
	scanf("%li%li",&a,&b);
	int ucln = gcd_euclid(a,b);
	if (ucln < (a*b) / ucln)
    {
        printf("%i\n", ucln);
        printf("%li\n", (a*b) /ucln);  
    }
    else
    {
        printf("%li\n", (a*b) /ucln);
        printf("%i\n", ucln);
    }
}
//	printf("%i\n",ucln);
//	printf("%i", abs((a*b))/(long)ucln);
//}
//	if (a >= b){
//		for ( i = b ; i>0 ; i--){
//			if ( a % i ==0 && b2 % i ==0){
//				ucln = i;
//				break;
//			}
//		}
//	}
//	else{
//		for ( i = a; i>0 ; i--){
//			if (a%i == 0 && b%i ==0){
//				ucln = i;
//				break;
//			}
//		}
//	}
	
//	if (a>b){
//		solon = a;
//		sonho = b;
//	}
//	else{
//		solon = b;
//		sonho = a;
//	
//	int i = 1;
//	int ucln;
//	while(i++){
//		if (a%b==0 || b%a ==0){
//			if (a >b){
//				ucln = b;
//			}
//			else{
//				ucln = a;
//			}
//			break;
//		}
//		else if(a >b){
//			a = a-b;
//		}
//		else{
//			b = b-a;
//		}
//	}
//
//
////	int i = b;
////	
////	while(i--){
////		if (a%i==0 && b%i == 0){
////			printf("%d\n",i);
////			break;
////		}
////	}
//	int lcm = abs(c*d)/(long)ucln;
//	printf("%d\n%d",ucln,lcm);
////	while (j++){
////		if (j % a ==0 && j % b == 0){
////			printf("%d\n",j);
////			break;
////		}
////	}
//}
//	int j =1,i =1;
//	int ucln,bcnn;
//	while (j++){
//		if (j % a ==0 && j % b == 0){
//			bcnn = jw;
//			break;
//		}
//	}
//	while(i++){
//		if (a%b==0 || b%a ==0){
//			if (a >b){
//				ucln = b;
//			}
//			else{
//				ucln = a;
//			}
//			break;
//		}
//		else if(a >b){
//			a = a-b;
//		}
//		else{
//			b = b-a;
//		}
//	}
//	printf("%d\n%d", ucln,bcnn);
//	
//}

