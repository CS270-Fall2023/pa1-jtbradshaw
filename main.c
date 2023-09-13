/**
 * @file main.c
 * @author Justin Bradshaw
 * @brief Finds the number of tokens in a cis string that was imputed into the terminal.
 * @version 0.1
 * @date 2023-08-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "functions.h"




int main()
{

    char **arrayOfTokens, str[256] = "ls -l file"; //ls -l file

    arrayOfTokens = (char**)malloc(sizeof(char*)*(100));
    for(int i = 0; i < 100; i++){
        arrayOfTokens[i] = (char*)malloc(sizeof(char)*100);  
    }
    
    int numberOfTokens;
    // printf("Please enter the string:");
    // fgets(str, 256, stdin);

    numberOfTokens = getTokens(str, &arrayOfTokens);
    printf("Number of tokens = %d\n", numberOfTokens+1);
    printf("%s", str);
    printf("%s\n", *arrayOfTokens);

    for(int i = 0; i<=numberOfTokens; i++){
        printf("Token %d:", i);
        printf("%s\n", arrayOfTokens[i]);
    }

    for(int i = 0; i < 100; i++){
        free(arrayOfTokens[i]);
        
    }
    free(arrayOfTokens);
    return 0;
}

