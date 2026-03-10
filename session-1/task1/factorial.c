
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    long long num_array[20]; //created array of length 20
    for (int i=0; i<20; ++i){
      num_array[i] = i+1;
      int result = 1; 
      for (int j=1; j<=i; ++j){
        result = result * j;
        num_array[i] = result;
      }
      printf("%lld \n",num_array[i]); //print long long 
    }
    return 0;
 }
