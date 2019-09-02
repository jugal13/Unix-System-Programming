/* Write a  C program to simulate copy command by accepting the filenames from command line. Report all errors */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  char buf[100];
  int fd1, fd2;
  off_t size, ret, set;
  ssize_t readdata, writedata;
  if (argc < 3)
    printf("TOO FEW ARGUMENTS");

  fd1 = open(argv[1], O_RDONLY); //Open file 1
  if (fd1 == -1)
    printf("ERROR IN OPENING FILE: FILE DOES NOT EXIST \n");
  else
    printf("FILE 1 OPENED SUCCESSFULLY \n");

  fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666); //open file 2 in read-write mode, truncate its length to 0, create the file if it does not exist, 0666 is the access permission for the created file. order is important.
  if (fd2 == -1)
    printf("ERROR IN OPENING FILE");
  else
    printf("FILE 2 OPENED SUCCESSFULLY \n");

  size = lseek(fd1, 0L, SEEK_END); //obtain the size of file 1 using lseek
  if (size == -1)
    printf("ERROR: COULD NOT OBTAIN FILE SIZE \n");
  else
    printf("FILE SIZE OF FILE 1 OBTAINED \n");

  ret = lseek(fd1, 0L, SEEK_SET); //change the current pointer to the beginning of the file
  if (ret == -1)
    printf("RETRACE FAILED \n");

  readdata = read(fd1, buf, size); //read data equal to the size of the first file
  if (readdata == -1)
    printf("ERROR IN READING FILE CONTENTS \n");

  writedata = write(fd2, buf, size); //write the data to file 2 from buffer after read
  if (writedata != size)
    printf("ERROR IN COPYING FILE");
  else
    printf("FILE COPIED SUCCESSFULLY");
  return 0;
}
