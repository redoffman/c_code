#include<stdio.h>
#include<string.h>

char trim( char* p_str)
{
    char str[255];

    strcpy( str, p_str);
    return strdup(str);
}