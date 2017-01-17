#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int tab[5];
    long long int min;
    long long int max;
    long long int sum = 0;
    scanf("%lld",&tab[0]);
    max = tab[0];
    min = tab[0];
    sum = sum + tab[0];
    for(int i = 1; i < 5; i++){
        scanf("%lld",&tab[i]);
        if(tab[i]>max){
            max = tab[i];
            
        }
        if(tab[i]<min){
            min = tab[i];
        }
        sum = sum + tab[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
