#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

char *READ(char prompt[]) {
  char *line;
  line = readline(prompt);

  if (!line)
    return NULL;

  add_history(line);
  return line;
}

char *EVAL(char *line) {
  return line;
}

char *PRINT(char *line) {
  return line;
}

int main() {
  char *ast, *expr;
  char prompt[100];

  snprintf(prompt, sizeof(prompt), "user> ");

  while (1) {
    ast = READ(prompt);
    if (!ast) {
      putchar('\n');
      break;
    }

    expr = EVAL(ast);
    puts(PRINT(expr));

    free(ast);
  }
  return 0;
}
