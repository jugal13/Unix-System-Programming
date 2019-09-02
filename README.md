# USP

## Programs

### Week 1
3. Write a C program to read from keyboard and display on monitor screen.
4. Write a C program to simulate copy command that copies contents of one file into another.
5. Write a C program to simulate a calculator reading the operation and operands from command line.

### Week 2
8. Write a C program to read from standard input and display on standard output.
9. Write a program to read n characters from a file and append them back to the same file using dup2 function.
10. Write a program
    1. to read first 20 characters from a file
    2. seek to 10th byte from the beginning and display 20 characters from there
    3. seek 10 bytes ahead from the current file offset and display 20 characters 
    4. display the file size
11. Write a program to display the file content in reverse
order using lseek system call.

### Week 3
1. Write a program to print the type of a given file using stat function.
2. Write a C program to display various details of a file using stat structure (At least 5 fields).
3. Write a program to demonstrate access function usage.
4. Write a program to demonstrate umask function.
5. Write a program to demonstrate chmod function.

### Week 4
1. Write a C program to demonstrate the creation of hardlink and various properties of hardlinks.
2. Write a C program to implement ls –li command which lists the files in a specified directory , your program should print 5 attributes of a file.
3. Write a C program to remove display empty files in a given directory, also rename the empty files with the extension .emt
4. Write a program to copy access and modification time of a file1 to another file using utime function.
5. Write a program to demonstrate different methods of process termination.

### Week 5
1. Write a C program to display environment variables using global variable
environ
2. Write a C program to display environment variables using APIs available in C.
3. Write a C program to access the shell environment variable(SHELL). print its value,set it to /bin/csh and print the new value to standard output
4. Write a C program to illustrate the effect of setjmp and longjmp functions on registers, volatile and automatic variables.
5. Write a C program to demonstrate the working of fork( ) function.

### Week 6
1. Write a C program to demonstrate the race condition among parent and child processes. 
2. Write a C program to demonstrate any 3 exec functions.
3. Write a C program to create interpreter file which is used to implement exec function. 
4. Write a C Program to implement system function

## Internals
1. Write a C program to display the file content in reverse order using lseek system call.
2. Write a C program
    1. to read first 20 characters from a file
    2. seek to 10th byte from the beginning and display 20 characters from there c. seek 10 bytes ahead from the current file offset and display 20 characters d. display the file size
3. Write a C program to display various details of a file using stat structure (At least 5 fields)
4. Write a C program to implement ls –li command which list the files in a specified directory. Your program should Print 5 attributes of files.
5. Write a C program to remove empty files from the given directory.
6. Write a C program to demonstrate the creation of soft links and the various properties of hard links
7. Write a C program to Copy access and modification time of a file to another file using utime function.
8. Write a C program to illustrate effect of setjmp and longjmp functions on register and volatile variables.
9. Write C program to simulate copy command by accepting the filenames from command line. Report all errors.
10. Write a C program to avoid zombie status of a process.
11. Write a C program to demonstrate race condition among parent and child processes.

## Externals
1. Write a C program to display the file content in reverse order using lseek system call.
2. Write a C program to implement ls –li command which list the files in a specified directory. Your program should print 5 attributes of files.
3. Write a C program to remove empty files from the given directory.
4. Write a program to Copy access and modification time of a file to another file using utime function.
5. Write a C program to illustrate effect of setjmp and longjmp functions on register and volatile variables.
6. Write a C program to demonstrate race condition among parent and child processes.
7. Write a C program to avoid zombie status of a process.
8. Write a C program to demonstrate the initialization of a daemon process.
9. Write a C program using sigaction system call which calls a signal handler on SIGINT signal and then reset the default action of the SIGINT signal.
10. Write a C program (use signal system call)
    1. which calls a signal handler on SIGINT signal and then reset the default action of the SIGINT signal
    2. Which ignores SIGINT signal and then reset the default action of SIGINT signal
11. Write a C program to create a file with permission 666 , mask the permission bits such that the original file permission after masking is 600, then display the modification time and access time of a file using utime function.
12. Write a C program to implement client - server communication using pipes. Client should send a string to the server and it should change the first character of the string to uppercase and sends it back to client.