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

    char **arrayOfTokens, str[256] = "ls -l file";
    int numberOfTokens;
    printf("Please enter the string:");
    scanf("%s", str);

    numberOfTokens = getTokens(str, &arrayOfTokens);
    printf("%d", numberOfTokens);    
    return 0;
}

