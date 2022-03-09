#include "lib/define.h" 
#include "lib/functions.h"

#define ASIZE 500
#define SLINE(title) printf("\n---[ %s ]---\n", title)
#define SRES(name, result) printf("%s: %s\n", name, result)

int main() {
  pgrd();
  return 0;
}

void fs_exmpl() {
  char dat[ASIZE];
  char filename[ASIZE];
  SLINE("Write the file");
  printf("filename: ");
  lnrd(filename);
  printf("Done !\nNow you can write text into this file: ");
  lnrd(dat);
  printf("filename = %s\ndat = %s\n", filename, dat);
  wrt_file(dat, filename);
  SLINE("And after you will read this file");
  rd_file(filename, dat);
}

void wrt_exmpl() {
  char str[ASIZE] = "Cool String";
  SLINE("READSTR");
  readstr(str);
  SLINE("STDOUT");
  printf("STR: %s\nADRS: %p\n", str, &str);
}

void tui_exmpl() {
  SLINE("TUI DEMO");
  printf("\ns - sleep 5 seconds\nt - current unixstamp\nPress something: ");
  while (true) {
    switch (getchar()) {
      case 'w':
        printf("00\n");
        break;
      case 's':
        sleep(5);
        printf("Done!\n");
        break;
      case 't':
        printf("unixstamp: %i\n", time(NULL));
      case '\n':
        putchar('\n');
        break;
      default:
        printf("| Demo is missing\n");
        break;
    }
  }
}
