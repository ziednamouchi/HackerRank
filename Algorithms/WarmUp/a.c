#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main(){
    int n,k,q,temp,x,i;
    scanf("%d %d %d",&n,&k,&q);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    k = k % n;
    
    for(i=0;i<n;i++){
        temp = (i+n-k)%n;
        a[i]=b[temp];   
    }
    for(i=0;i<q;i++){
        scanf("%d",&x);
        printf("%d\n",a[x]);
    }
    return 0;
}
