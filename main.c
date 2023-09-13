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

    char **arrayOfTokens, str[11] = "ls -l file"; //ls -l file

    arrayOfTokens = (char**)malloc(sizeof(char*)*(10));
    for(int i = 0; i < 10; i++){
        arrayOfTokens[i] = (char*)malloc(sizeof(char)*10);  
    }
    //printf("%d\n", arrayOfTokens[1][1]);
    int numberOfTokens;
    // printf("Please enter the string:");
    // fgets(str, 256, stdin);

    numberOfTokens = getTokens(str, &arrayOfTokens);
    printf("Number of tokens = %d\n", numberOfTokens+1);
    printf("String is: %s\n", str);


    for(int i = 0; i<=numberOfTokens; i++){
        printf("Token %d:", i);
        printf("%s\n", arrayOfTokens[i]);
    }

    for(int i = 0; i < 10; i++){
        free(arrayOfTokens[i]);
        
    }
    free(arrayOfTokens);
    return 0;
}

