
#include <stdio.h>

int main( void ) {

    /*
    // define suitable data
    int a, b;

    // use scanf to read from the terminal
    int count = scanf("%d + %d =", &a, &b);

    // print the output from scanf and the data values
    printf("%d + %d = %d \n", a, b, (a+b));
    */

    // define suitable data
    char nums[30]; //array size 30
    int num1;
    int num2;

    //read userinput
    fgets(nums, sizeof(nums), stdin);

    // use sscanf to read from the terminal
    sscanf(nums, "%d + %d =", &num1, &num2);

    // print the output from scanf and the data values
    printf("%d + %d = %d \n", num1, num2, (num1+num2));

    return 0;
}