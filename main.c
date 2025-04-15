#include "src/parser.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  for (;;) {
    char my_string[10];
    printf("42sh>");
    s_gets(my_string, 10);
    printf("%s\n", my_string);
    if (strcmp("exit", my_string) == 0) {
      exit(0);
    }
  }
  return 0;
}
