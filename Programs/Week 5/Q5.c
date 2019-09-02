#include <unistd.h>
#include <stdio.h>
int main() 
{
  fork();
  fork();
  fork();
  printf("Hello World");
}