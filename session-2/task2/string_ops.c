
/*
 * Some small tests of the string library
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
    char str1[100] = "hello";
    char str2[100] = "goodbye";
    char str3[100];

    // use printf to verify the following tests

    // use 'strcmp' to compare 2 strings - print the return value
    int strings_same = strcmp(str1, str2); 
    printf("%d \n", strings_same); //0 if equal, 1 if not

    // use 'strcat' to concatenate 2 strings - print the resulting string
    strcat(str1, str2);
    printf("%s \n", str1);

    // use 'strcpy' to copy a string into str3 - print string 3
    strcpy(str3, str2); //copy str2 into str3
    printf("%s", str3);

    return 0;
}
