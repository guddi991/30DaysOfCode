
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, t, j;
    scanf("%d",&t);
    char s[10000];
    for(i=1;i<=t;i++){
        scanf("%s",s);
        OddEven(s);
    }
    return 0;
}
void OddEven(char s[]){
    for(int i=0;i<strlen(s);i++){
        if(i%2==0){
            printf("%c",s[i]);
        }
    }
    printf(" ");
    for(int i=0;i<strlen(s);i++){
        if(i%2!=0){
            printf("%c",s[i]);
        }  
    }
    printf("\n");
}
