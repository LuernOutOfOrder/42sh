#include <stdio.h>
#include <stdlib.h>
#include "src/parser.c"
#include <string.h>

int main()
{
    for (;;)
    {
        char my_string[10];
        printf("42sh>");
        s_gets(my_string, 10);
        printf("%s\n", my_string);
        if (strcmp(my_string, "exit\0") != 0)
        {
            exit(0);
        }
    }
    return 0;
}