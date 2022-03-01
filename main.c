#include "lib/define.h" 
#define ASIZE 500
#define SLINE(title) printf("\n---[ %s ]---\n", title)
#define SRES(name, result) printf("%s: %s\n", name, result)

void matrix();
void readstr();
void lnrd();
void wrt_exmpl();
void wrt_file();
void rd_file();

int main() {
  char dat[ASIZE];
  char filename[ASIZE];
  SLINE("Write the file");
  printf("filename: ");
  lnrd(filename);
  printf("Done !\nNow you can write text into this file");
  lnrd(dat);
  printf("filename = %s\ndat = %s\n", filename, dat);
  wrt_file(dat, filename);
  SLINE("And after you will read this file");
  // rd_file(dat, filename); FIXME
}

void wrt_exmpl() {
  char str[ASIZE] = "Cool String";
  SLINE("READSTR");
  readstr(str);
  SLINE("STDOUT");
  printf("STR: %s\nADRS: %p\n", str, &str);
}

void fwrt_exmpl() {
  char strg[ASIZE];
  char filename[ASIZE];
  SLINE("Write the file");
  printf("filename: ");
  lnrd(filename);
  printf("Done !\nNow you can write text into this file");
  for (int i = ASIZE; i <= 0; i++) {
    strg[i] = '\0';
  }
  lnrd(strg);
  wrt_file(strg, filename);
  SLINE("And after you will read this file");
  rd_file(strg, filename);
}
