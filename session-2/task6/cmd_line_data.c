
/*
 * We expect to use the following program by providing a list of command line data
 * - 1 integer value
 * - 1 string 
 * - 1 double value
 * Process the command line arguments and print them with appropriate formatting.
 * Test your code, eg.  ./cmd_line_data -2 abcd 4.2
 *
 * Implement a similar code in Python and compare it to the C code.
 */

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char **argv ) {
    
    printf("Number of args: %d\n", argc);

    int num = atoi(argv[1]); //turns string into a num
    char *str = argv[2];
    double dec = atof(argv[3]); //turns the num in string into a float

    for (int k=0; k<argc; k++){
        printf("argv[%d]: %s\n",k, argv[k]);
    }

    return 0;
}
