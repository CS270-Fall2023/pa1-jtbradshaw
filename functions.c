/**
 * @file functions.c
 * @author Justin Bradshaw
 * @brief 
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "functions.h"

/**
 * @brief Finds the number of tokens in the cis string and returns them.
 * 
 * @param s char array that holds the string
 * @param args holds each token as its own array in this array.
 * @return the number of tokens in the function
 */
int getTokens(char *s, char ***args){
    //
    //printf("In getTokens\n");
    int size = 0;
    int num = 1; //Minimum number of tokens including NULL
    for (int i = 0; i < 50; i++){
        size++;
        if(isspace(s[i])){ //Use isspace #include <ctype.h>
            strncpy((*args)[num-1], s+i-size, size);
            num++;
            size = 0;
        }
    }
    return num;
}