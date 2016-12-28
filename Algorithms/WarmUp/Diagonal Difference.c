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
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    int first_diag = 0;
    int second_diag = 0;
    int result = 0;
    for(int a_i = 0; a_i < n; a_i++){
       
             first_diag  = first_diag + a[a_i][a_i];
     }
    for(int a_i = 0; a_i < n; a_i++){
       
            second_diag  = second_diag + a[a_i][n-1-a_i];
     }
    result = abs(first_diag - second_diag);
    printf("%d", result);
    return 0;
}
