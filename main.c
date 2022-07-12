#include "dxtlib.c"
#include <unistd.h>

int dxshell_exmpl();
void fs_exmpl();

#define ASIZE 500
#define SLINE(title) printf("\n---[ %s ]---\n", title)
#define SRES(name, result) printf("%s: %s\n", name, result)

int main() {
  int arr[] = {'a', 'y', 'o', ',', 'w', 'h', 't', 's', 'u', 'p'};
  void cb(int item, int idx) {
    printf("%c - %i\n", item, idx);
  }
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

int dxshell_exmpl() {
  SLINE("DXSHELL DEMO");
  printf("\n  who - shows your username\n  utime - check unix time\n  exit - exit from shell\n");
  while (true) {
    char str[ASIZE];
    char options[5][ASIZE] = {{"sleep"}, {"who"}, {"utime"}, {"exit"}, {"help"}};
    unsigned idx;
    unsigned a_len = sizeof options / sizeof options[0];
    printf("\ndxshell$: ");lnrd(str);
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
        case 4:
          printf("\n  who - shows your username\n  utime - check unix time\n  exit - exit from shell\n");
          break;; 
      }
    } 
  }
}
