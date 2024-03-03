#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>



int main(){
    char ch[10];
    scanf("%s",ch);
    int len = strlen(ch);
    char tmp = ch[0];
    ch[0] = ch[len -1];
    ch[len-1] = tmp;
    int a  = strtol(ch,NULL,10);
    printf("%d",a);


}
