# How to use/checkout?
```bash
# How to include into your project ?
mv plainfs/plainfs.h mycode/lib/
cd mycode/
gcc main.c lib/plainfs.h -o x && ./x

# How to checkout? 
cd plainfs 
make build run
```

### *Useful functions* or how to read input without fear :)

#### Functions 
- lnrd(char *array of string*) // line_read
- wrt_file(char *data*, char *filename*) // write_file
- rd_file(char *data*, char *filename*) // read_file
