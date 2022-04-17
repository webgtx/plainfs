#include "lib/define.h"

void lnrd(char * str) {
  int idx = 0;
  while (true) {
    char ch = getchar();
    if (ch == '\n') 
      break;
    str[idx] = ch;
    idx++;
  }
  str[idx++] = '\0';
}

// Only INT, don't trying use arrays with char
void foreach(int *arr, int len, void (*callback) (int item, int idx)) {
  unsigned idx = 0;
  for (idx; idx < len; idx++) 
    callback(arr[idx], idx);
}

// This function is broken, stopwatcher always late on 1 seconds for iteration.
void sleep(int timeout) { // FIXME
  int idx = 0;
  printf("sleep was started...\n");
  int time_bp = time(NULL) + timeout;
  while (time_bp >= time(NULL)) {
    printf("%is timeout: %i\n", idx, time(NULL));
    idx++;
  }
}

// this function for test, dont use it
void readstr(char * string) {
  scanf("%s", string);
  printf("STR: %s\nADRS: %p\n", string, string);
}

void matrix() {
  char mtx[2][3] = {{"mat"}, {"rix"}};
  mtx[1][1] = '1';
  for (int i = 0; i < 2; i++) {
    printf("%i)idx: [%c] [%c] [%c]\n", i, mtx[i][0], mtx[i][1], mtx[i][2]);
  }
  printf("\tsizeof arr = %i bytes\n", sizeof(mtx));
}

void wrt_file(char * dat, char * filename) { 
  FILE *file = fopen(filename, "w");
    fprintf(file, dat);
  fclose(file);
}

void rd_file(char * filename, char * file_str) {
  int c;
  int idx = 0;
  FILE *file;
  printf("filename: %s\n", filename);
  file = fopen(filename, "r");
  if (file) {
    while ((c = getc(file)) != EOF) {
      file_str[idx] = c;
      idx++;
    }
    fclose(file);
  }
  printf("filedat: %s\n", file_str);
}

