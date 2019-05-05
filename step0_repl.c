#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>


int main() {
  char *line;
  while (1) {
    line = readline("user> ");
    if (!line) {
      putchar('\n');
      break;
    }
  }
  return 0;
}
