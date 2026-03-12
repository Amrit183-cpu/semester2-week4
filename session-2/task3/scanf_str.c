
#include <stdio.h>

int main( void ) {
    char input[10]; //create array of 10 elements

    //int count = scanf("%s",input); //wait for userinput
    int count = scanf("%9s",input); //only reads up to 9 chars
    //but does allow for more chars to be inputted, just has a limit

    printf("Read %d value\n",count);
    printf("Values: %s\n",input);

    return 0;
}
//the limit should always be buffer size - 1
//otherwise if there is no limit, it will cause stack overflow
//or if the limit is incorrect, then c will keep writing to other parts of memory
//without letting you know, which could cause errors