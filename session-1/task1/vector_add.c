
/*
 * Sum of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float c[5];

    size_t a_length = sizeof(a) / sizeof(a[0]);
    size_t b_length = sizeof(b) / sizeof(b[0]);

    for (int i=0; i<a_length; ++i){
      int result = a[i] + b[i];
      c[i] = result;
      printf("%f \n", c[i]);
    }

    return 0;
 }
