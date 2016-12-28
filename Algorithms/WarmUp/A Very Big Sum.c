#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    long int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%li",&arr[arr_i]);
    }
    long sum = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
        sum += arr[arr_i];
    }
    printf("%li",sum);
    return 0;
}
