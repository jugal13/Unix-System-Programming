/* Write a C program to demonstrate the creation of soft links and the various properties of hard links */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
int main(int argc, char *argv[])
{
  if (argc == 3)
  {
    printf("Hard linking %s and %s", argv[1], argv[2]);
    if (link(argv[1], argv[2]) == 0)
      printf("\nHard link created");
    else
      printf("\nLink not created");
  }
  else if (argc == 4)
  {
    printf("Soft linking %s and %s", argv[1], argv[2]);
    if (symlink(argv[1], argv[2]) == 0)
      printf("\nSoft link created");
    else
      printf("\nLink not created");
  }
}