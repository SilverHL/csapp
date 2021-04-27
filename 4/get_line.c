#include <string.h>
#include <stdio.h>
#include "ovfl.c"

char *get_line() 
{
    char buf[4];
    char *result;
    gets(buf);
    result = malloc(strlen(buf));
    strcpy(result, buf);
    return result;

}


int main() 
{
    char *res = get_line();
    return 0;

}
