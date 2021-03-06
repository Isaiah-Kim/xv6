#include <syscall.h>
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv)
{
  int i;

  if(argc < 1){
    fprintf(stderr, "usage: kill pid...\n");
    sysexit();
  }
  for(i=1; i<argc; i++)
    kill(atoi(argv[i]));
  sysexit();
}
