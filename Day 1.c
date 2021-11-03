
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j;
    double p;
    char g[100];
    scanf("%d",&j);
    scanf("%lf",&p);
    scanf("%*[\n]%[^\n]",&g);
    printf("%d",i+j);
    printf("\n%.1lf",d+p);
    printf("\n%s%s",s,g);
    
    return 0;
}
