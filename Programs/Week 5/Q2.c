#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("test\n");
  const char *log = getenv("LOGNAME");
  const char *home = getenv("HOME");
  const char *shell = getenv("SHELL");
  const char *path = getenv("PATH");
  const char *lines = getenv("LINES");
  printf("LOGNAME: %s\n", (log != NULL) ? log : "getenv returned NULL");
  printf("HOME: %s\n", (home != NULL) ? home : "getenv returned NULL");
  printf("SHELL: %s\n", (shell != NULL) ? shell : "getenv returned NULL");
  printf("PATH: %s\n", (path != NULL) ? path : "getenv returned NULL");
  printf("LINES: %s\n", (lines != NULL) ? lines : "getenv returned NULL");
  printf("end test\n");
}
