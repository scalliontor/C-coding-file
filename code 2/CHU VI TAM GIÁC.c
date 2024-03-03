#include <stdio.h>
#include <math.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long int x1,y1,x2,y2,x3,y3;
        scanf("%lld%lld%lld%lld%lld%lld",&x1,&y1,&x2,&y2,&x3,&y3);
        double x = sqrt( pow((x1-x2),2) + pow((y1-y2),2) );
        double y = sqrt( pow((x1-x3),2) + pow((y1-y3),2) );
        double z = sqrt( pow((x2-x3),2) + pow((y2-y3),2) );
    
    
    
        if(x < (y+z) && y < (x+z) && z < (y+x))
        {  
            double P = x+y+z;
            printf("%.3lf\n", P);	 
        }
        else
        {
            printf("INVALID\n");
        }
    }
        
    return 0;
}