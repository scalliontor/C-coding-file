#include<stdio.h>
#include<math.h>


void check(long long int n){
    if ( n == 0) {
        printf("INVALID"); 
        return;
    }
   
    int i = 0;
    char res[20];
    while (n > 0){
        int tmp = n %10;
        n /= 10;

        if (tmp == 0 || tmp == 8 || tmp == 9)
        {
            res[i] = '0';
        }
        else if (tmp == 1)
        {
            res[i] = '1'; 
        }
        else
        {
            printf("INVALID");
            return;
        }
        i++;
        
    }
    i--;
    while(res[i] == '0')
    {
        i--;
    }
    if (i < 0)
    {
    	printf("INVALID");
        return;
	}
    
    for (; i >= 0; i--)
    {
        printf("%c", res[i]);
    }
    
}


int main () {
    int t;
    scanf ("%d", &t);
    while (t--)
    {
        long long int n;
        scanf ("%lld", &n);
        check(n);
        printf("\n");
    }
}

