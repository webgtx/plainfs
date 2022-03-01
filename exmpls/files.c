#include <stdio.h>
#include <stdbool.h>
/*
    If you needed cheatsheet with UNIX or GIT commands
    you can visit this repository github.com/webgtx/unixs
*/
int main() {
  char string[255];
  scanf("%s", &string);
  FILE *file = fopen("something", "w");
    fprintf(file, string);
  fclose(file);
  file = fopen("something", "r");
    fgets(string, 255, file);
    printf("%s \n", string);
  fclose(file);
  return 0;
}
