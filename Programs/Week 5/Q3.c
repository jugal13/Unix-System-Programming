#include <stdio.h>
#include <unistd.h>
int main(int argc, char* argv[]) {
  char* SHELL = getenv("SHELL");
  puts("SHELL");
  setenv("SHELL","/bin/csh",1);
  SHELL = getenv("SHELL");
  puts("SHELL");
}