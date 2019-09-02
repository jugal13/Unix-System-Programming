#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
int main(void)
{
  if (execl("./echoarg",
            "testinterp", "myarg1", "MY ARG2", (char *)0) < 0)
    printf("%s", "error");
}