#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char text();
char main();

char text()
{
    char palavra1[]= "tata";
    return palavra1;
}

char main()
{
    char saida[50];
    strcpy(saida,text());   // this line is supposed to copy the string from text to the var saida
    printf("%s", saida);
    return 0;
}