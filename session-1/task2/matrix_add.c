
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    for (int k=0; k<4; ++k) {
      for (int j=0; j<4; ++j){
         a[k][j] = 1;
         printf("%.2f",a[k][j]);
      }
      printf("\n ");
    }

    float b[4][4];
    for (int l=0; l<4; ++l) {
      for (int m=0; m<4; ++m){
         b[l][m] = 1;
         printf("%.2f",b[l][m]);
      }
      printf("\n ");
    }
    float c[4][4];

    for (int x=0; x<4; ++x){
      for (int y=0; y<4; ++y) {
         c[x][y] = ("%.2f ",a[x][y] + b[x][y]);
         printf("%.2f",c[x][y]);
      }
      printf("\n");
    }

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
    return 0;
 }
