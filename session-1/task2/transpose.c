
/*
 * Transpose of a matrix
 */

 #include <stdio.h>

 int main( void ) {
    int a[4][4];

    for (int i=0; i<4; ++i){
      for (int j=0; j<4; ++j){
         a[i][j] = 2*i-j;
         printf("%.2d ",a[i][j]);
      }
      printf("\n");
    }
    printf("\n");

    for (int i=0; i<4; ++i){
      for (int j=0; j<4; ++j){
         if (j>i){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
         }
         printf("%.2d ",a[i][j]);
      }
      printf("\n");
    }


    /*
    Intialise the matrix a to 2i-j.
    Print out matrix a. 
    Write code for the transpose - you can use other variables as necessary but not a cpoy of the matrix 
    Print the transpose.
    */
    return 0;
 }
