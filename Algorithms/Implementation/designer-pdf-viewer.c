#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n=26;
    int *h =(int *)malloc(sizeof(int) * n);
    for(int h_i = 0; h_i < n; h_i++){
       scanf("%d",&h[h_i]);

    }
    char *word = (char *)malloc(512000 * sizeof(char));
    scanf("%s",word);

    char slength;
    slength= strlen(word);

    int area = 0;
    int width = slength * 1;
    int maxheight = h[0];
    for(int i = 1; i < slength; i++){
       char temp = word[i];
      if(maxheight<h[((int)temp-97)]){
      maxheight = h[((int)temp-97)];
      }
    }
    area = width * maxheight;
    printf("%d",area);
    free(word);
    free(h);
    return 0;
}
