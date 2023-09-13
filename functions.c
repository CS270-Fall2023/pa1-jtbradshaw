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
    int numSpace = 0;
    int sizeOfStr = 0;
    int token = 0;
    int numString = 1;
    char temp;
    for(int i = 0; i <= sizeof(s);i++){
        sizeOfStr++;
        if(!isspace(s[i])){
            printf("In if !isspace with token num = %d\n", token);
            temp = s[i];
            (*args+token)[i] = &temp;
            printf("Temp: %d\n", temp);
            printf("args: %s\n", (*args+token)[i]);
        }else{
            numSpace++;
            token++;
            numString ++;
            printf("sizeOfStr: %d\n", sizeOfStr);
            printf("numString: %d\n", numString);
            
        }
    }
    printf("numSpace: %d\n", numSpace);


    // int size = 0;
    // int num = 1; //Minimum number of tokens including NULL


    // for (int i = 0; i < 50; i++){
    //     size++;
    //     if(isspace(s[i])){ //Use isspace #include <ctype.h>
    //         strncpy((*args)[num-1], s+i-size, size);
    //         num++;
    //         size = 0;
    //     }
    // }
    
    return numString;
}