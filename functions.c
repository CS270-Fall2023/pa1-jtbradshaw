#include "functions.h"

//Use isspace or isblank with #include <ctype.h>
/**
 * @brief Finds the number of tokens in the cis string and returns them.
 * 
 * @param s char array that holds the string
 * @param args holds each token as its own array in this array.
 * @return the number of tokens in the function
 */
int getTokens(char *s, char ***args){
    printf("In getTokens\n");
    int num = 1; //Number of tokens including NULL
    for (int i = 0; i < 20; i++){
        //printf("In for loop");
        if(isspace(s[i])){
            //printf("In if statement");
            //printf("%s", s+i);
            num++;
        }
    }

    return num;
}