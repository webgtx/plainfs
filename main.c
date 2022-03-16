#include "lib/define.h" 
#include "lib/functions.h"

#define ASIZE 500
#define SLINE(title) printf("\n---[ %s ]---\n", title)
#define SRES(name, result) printf("%s: %s\n", name, result)

int main() {
  dxshell_exmpl();
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

int dxshell_exmpl() {
  SLINE("DXSHELL DEMO");
  printf("\nsleep - sleep 5 seconds\nutime - current unixstamp\nwho - current user\nexit - exit from shell\n");
  while (true) {
    char str[ASIZE];
    char options[4][ASIZE] = {{"sleep"}, {"who"}, {"utime"}, {"exit"}};
    unsigned idx;
    unsigned a_len = sizeof options / sizeof options[0];
    printf("dxshell$: ");lnrd(str);
    for (idx = 0; idx < a_len; idx++) {
      int is_same = strcmp(options[idx], str);
      if (is_same == 0) 
      switch (idx) {
        case 0:
          sleep(5);
          break;;
        case 1:
          system("whoami");
          break;;
        case 2:
          printf("now is: %li\n", time(NULL));
          break;;
        case 3:
          SLINE("BYE BYE ;)");
          return 0; 
      }
    } 
  }
}
