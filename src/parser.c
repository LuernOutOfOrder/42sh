#include <stdio.h>

void s_gets(char *str, int n)
{
    char *str_read = fgets(str, n, stdin);
    if (!str_read)
        return;

    int i = 0;
    while (str[i] != '\n' && str[i] != '\0')
        i++;

    if (str[i] == '\n')
        str[i] = '\0';
}

// TODO
// Getline()
