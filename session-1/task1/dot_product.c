
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float d;

   size_t a_length = sizeof(a) / sizeof(a[0]);
    for (int i=0; i<a_length; ++i){
      d = d + (a[i] * b[i]);
    }
    printf("%f", d);
    
    return 0;
 }