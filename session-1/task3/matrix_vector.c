
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           

    float **a = calloc(n, sizeof(float*)); //array of pointers
    for (int i=0; i<n; i++){
        a[i] = calloc(n,sizeof(float)); //array of floats
    }
    float *b = calloc(n, sizeof(float));
    float *c = calloc(n, sizeof(float));

    for (int i=0; i<n; i++){
        b[i] = i+1; //vector b has elements 1,2,3,4
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            a[i][j] = i+1;
            c[i] = c[i] + (a[i][j] * b[j]);
        }
        printf("%f\n", c[i]);
    }

    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */

    for (int i=0;i<n; i++){
        free(a[i]);
    }
    free(a);
    a = NULL;
    free(b);
    b = NULL;
    free(c);
    c = NULL;
    
    return 0;
 }
