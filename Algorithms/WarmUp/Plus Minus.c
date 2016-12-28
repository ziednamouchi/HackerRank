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
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    float count_pos = 0;
    float count_neg = 0;
    float count_zero = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       if(arr[arr_i]>0){
           count_pos += 1;
       }
        else if(arr[arr_i]<0){
            count_neg += 1;
        }
        else{
            count_zero += 1;
        }
    }
    
    printf("%f\n",count_pos/n);
    printf("%f\n",count_neg/n);
    printf("%f\n",count_zero/n);
    return 0;
}
