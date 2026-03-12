
/*
Name: Amritpal Singh
Student ID: 201965262
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {
    
    // define appropriate data to hold your answer
    char buffer[100]; //array storing 100 chars
    int count = 0; //acts as SP in array

    //check if amount of arguments is <=10
    if (argc<12){
        //check all args are <=4 chars
        for (int k=1; k<argc; k++){ //start from 1 due to name of program
            if (strlen(argv[k]) >4){ //if length of arg >4
                return 0; //end program
            }
            else {
                if (k<argc-1){ //only do for not last args
                    for (int i=0; i<strlen(argv[k]); i++){ //loop over each char in this element
                        buffer[count] = argv[k][i]; //append buffer array
                        count = count + 1; //increment counter
                    }
                    buffer[count] = '-'; //only add after every arg
                    count = count + 1; //increment counter
                } else { //for last argument don't add '-'
                    for (int x=0; x<strlen(argv[k]); x++){ //loop over each char in this element
                        buffer[count] = argv[k][x]; //append buffer array
                        count = count + 1; //increment counter
                    }
                }
            }
        }
    }

    // process the command-line data using appropriate string functions
    buffer[count] = '\0'; //end the string 
    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}