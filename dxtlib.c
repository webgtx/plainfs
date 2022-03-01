#include "lib/define.h" 

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

void wrt_file(char * dat, char * filename) { 
  FILE *file = fopen(filename, "w");
    fprintf(file, dat);
  fclose(file);
}

void rd_file(char * filename) {
  char dat[500];
  printf("%s\n%s\n", filename, dat);
  FILE *file = fopen(filename, "r");
    //fgets(dat, 255, file);
    //printf("%s\n", dat);
  fclose(file);
}
