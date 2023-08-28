#include <stdio.h>
#include <stdlib.h>

int getTokens(char *s, char ***args);
const int SIZE = 10;

int main()
{

    char **arrayOfTokens, str[] = "ls -l file";
    int numberOfTokens;
    numberOfTokens = getTokens(str, &arrayOfTokens);

    // scanf("%d", &arrayOfTokens);
    printf("%d", numberOfTokens);

    return 0;
}


int getTokens(char *s, char ***args){
    printf("In getTokens\n");
    int num = 1;
    for (int i = 0; i < SIZE; i++){
        if((s+i) == " "){
            printf("%s", s+i);
            num++;
        }
    }


    return num;
}