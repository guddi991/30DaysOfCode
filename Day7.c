
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,i;
    scanf("%d",&n);
    int a[10000];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); 
    } 
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
        
    } 
    
}
