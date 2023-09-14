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
    int size = sizeof(s)+2;
    int numSpace = 0;
    int sizeOfStr = 0;
    int token = 0;
    int numString = 1;
    char temp;
    (*args) = malloc(10 * sizeof(char*));
    for(int i = 0; i < 10; i++){
        (*args)[i] = malloc(15 * sizeof(char*));
    }
    for(int i = 0; i <= size; i++){
        
        if(!isspace(s[i]) && s[i] != '\0'){
            sizeOfStr++;
            printf("In if !isspace with token num = %d\n", token);
            temp = s[i];
            
            printf("Temp: %d\n", temp);
            
        }else{
            strncpy((*args)[token], (s+i-sizeOfStr), sizeOfStr+1);
            printf("args: %s\n", *(*args+token));
            numSpace++;
            token++;
            numString ++;
            printf("sizeOfStr: %d\n", sizeOfStr);
            printf("numString: %d\n", numString);
            sizeOfStr = 0;            
        }
    }
    printf("numSpace: %d\n", numSpace);

    return numString;
}