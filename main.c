/**
 * @file main.c
 * @author Justin Bradshaw
 * @brief Finds the number of tokens in a cis string that was imputed into the terminal. For CS270 PA1
 * @version 0.1
 * @date 2023-08-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "functions.h"


int main()
{

    char **arrayOfTokens, str[128];
    printf("Please enter a string: ");
    fgets(str, sizeof str, stdin);

    int numberOfTokens;

    numberOfTokens = getTokens(str, &arrayOfTokens);
    printf("Number of tokens = %d\n", numberOfTokens);
    printf("String is: %s\n", str);


    for(int i = 0; i<numberOfTokens; i++){
        printf("Token %d: ", i);
        if(*arrayOfTokens[i] == '\0'){
            printf("NULL");
        }
        printf("%s\n", arrayOfTokens[i]);   
    }
    //Frees dynamically allocated memory
    for(int i = 0; i < 50; i ++){
        free(arrayOfTokens[i]);
    }
    free(arrayOfTokens);
    
    return 0;
}

