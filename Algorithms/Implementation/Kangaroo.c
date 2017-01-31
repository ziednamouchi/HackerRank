#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    int d1 = x1 + v1;
    int d2 = x2 + v2;

    if (v1 <= v2){
        printf("NO");
    }
    else{

        while((d1 != d2) && (d1 < d2)){
            d1 += v1;
            d2 += v2;
        }
        int j = (d1-x1)/v1;
        int i = (d2-x2)/v2;
        if(d1 > d2){
            printf("NO");
        }
        else if( i == j){
            printf("YES");
        }
        else{
            printf("NO");
        }

    }
        return 0;
}
