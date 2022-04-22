# Welcome to **DXTLIB** documentation

### How to use?
```bash
# How to include into your project ?
mv dxtlib/dxtlib.c mycode/lib/
cd mycode/
gcc main.c lib/dxtlib.c -o x && ./x

# How to checkout? 
cd dxtlib
./exec.sh
```

### *API* or how to read input without fear :)

#### **Base** FS
- lnrd(char *array*) // line_read
- wrt_file(char *data*, char *filename*) // write_file

#### **Test features**
- matrix() // matrix_example
