#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    int Alice_p = 0;
    int Bob_p = 0;
    int A[3];
    A[0] = a0;
    A[1] = a1;
    A[2] = a2;
    int B[3];
    B[0] = b0;
    B[1] = b1;
    B[2] = b2;
    for (int i=0 ; i<=2 ; i++){
        if (A[i]<B[i]){
            Bob_p = Bob_p + 1;
        }
        else if (A[i]>B[i]){
            Alice_p = Alice_p + 1;
        }
    }
    printf("%d %d", Alice_p,Bob_p);
    return 0;
}
