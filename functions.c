/**
 * @file functions.c
 * @author Justin Bradshaw
 * @brief is the functions file for CS270 PA1
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
    int size = 0;
    for(int i = 0; i < 128; i ++){ //Finds the size of the array because sizeof() was not working because *s is a pointer
        size++;
        if(s[i] == '\n'){
            size--;
            break;
            break;
        }
    }
    
    int numSpace = 0; //Counts number of spaces
    int sizeOfStr = 0; //Tracks the size of the string for strncpy
    int token = 0; //Counts the number of tokens
    int numString = 1; //Counts the number of strings +1 for null
    s[size] = '\0'; //Sets string to end in null rather than \n
    (*args) = malloc(50 * sizeof(char*)); //dynamically allocates memory
    for(int i = 0; i < 50; i++){
        (*args)[i] = malloc(15 * sizeof(char*));
    }
    for(int i = 0; i <= size; i++){
        
        if(!isspace(s[i]) && s[i] != '\0' && s[i] != '\n'){
            sizeOfStr++;
            
        }else{
            strncpy((*args)[token], (s+i-sizeOfStr), sizeOfStr+1);
            numSpace++;
            token++;
            numString ++;
            sizeOfStr = 0;            
        }
    }

    return numString;
}