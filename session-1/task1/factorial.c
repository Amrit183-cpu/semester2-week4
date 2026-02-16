
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];
    for ( int k=0; k<20; ++k) { 
      f[0] = 1;
      //how to implement the factorial?
      for (int j=0; j<k; ++j) {
        f[k] = f[k] * f[j];
      }
      printf("%d ", f[k]);
    }

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    return 0;
 }
