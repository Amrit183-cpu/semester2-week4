
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

    for (int k=0; k<4; ++k){
      b[k] = k+1;
    }

    for (int i=0; i<4; ++i){
      c[i] = 0;
      for (int j=0; j<4; ++j){
         a[i][j] = i+1;
         c[i] = c[i] + (a[i][j] * b[j]);
      }
      printf("%f \n", c[i]);
    }
    
    return 0;
 }
