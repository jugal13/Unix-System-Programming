# USP

## Programs

### Week 1
3. [Write a C program to read from keyboard and display on monitor screen.](Programs/Week&#32;1/Q3.c)
4. [Write a C program to simulate copy command that copies contents of one file into another.](Programs/Week&#32;1/Q4.c)
5. [Write a C program to simulate a calculator reading the operation and operands from command line.](Programs/Week&#32;1/Q5.c)

### Week 2
8. [Write a C program to read from standard input and display on standard output.](Programs/Week&#32;2/Q8.c)
9. [Write a program to read n characters from a file and append them back to the same file using dup2 function.](Programs/Week&#32;2/Q9.c)
10. [Write a program](Programs/Week&#32;2/Q10.c)
    1. to read first 20 characters from a file
    2. seek to 10th byte from the beginning and display 20 characters from there
    3. seek 10 bytes ahead from the current file offset and display 20 characters 
    4. display the file size
11. [Write a program to display the file content in reverse order using lseek system call.](Programs/Week&#32;2/Q11.c)

### Week 3
1. [Write a program to print the type of a given file using stat function.](Programs/Week&#32;3/Q1.c)
2. [Write a C program to display various details of a file using stat structure (At least 5 fields).](Programs/Week&#32;3/Q2.c)
3. [Write a program to demonstrate access function usage.](Programs/Week&#32;3/Q3.c)
4. [Write a program to demonstrate umask function.](Programs/Week&#32;3/Q4.c)
5. [Write a program to demonstrate chmod function.](Programs/Week&#32;3/Q5.c)

### Week 4
1. [Write a C program to demonstrate the creation of hardlink and various properties of hardlinks.](Programs/Week&#32;4/Q1.c)
2. [Write a C program to implement ls –li command which lists the files in a specified directory , your program should print 5 attributes of a file.](Programs/Week&#32;4/Q2.c)
3. [Write a C program to remove display empty files in a given directory, also rename the empty files with the extension .emt](Programs/Week&#32;4/Q3.c)
4. [Write a program to copy access and modification time of a file1 to another file using utime function.](Programs/Week&#32;4/Q4.c)
5. [Write a program to demonstrate different methods of process termination.](Programs/Week&#32;4/Q5.c)

### Week 5
1. [Write a C program to display environment variables using global variable environ](Programs/Week&#32;5/Q1.c)
2. [Write a C program to display environment variables using APIs available in C.](Programs/Week&#32;5/Q2.c)
3. [Write a C program to access the shell environment variable(SHELL). print its value,set it to /bin/csh and print the new value to standard output](Programs/Week&#32;5/Q3.c)
4. [Write a C program to illustrate the effect of setjmp and longjmp functions on registers, volatile and automatic variables.](Programs/Week&#32;5/Q4.c)
5. [Write a C program to demonstrate the working of fork( ) function.](Programs/Week&#32;5/Q5.c)

### Week 6
1. [Write a C program to demonstrate the race condition among parent and child processes.](Programs/Week&#32;6/Q1.c)
2. [Write a C program to demonstrate any 3 exec functions.](Programs/Week&#32;6/Q2.c)
3. [Write a C program to create interpreter file which is used to implement exec function.](Programs/Week&#32;6/Q3.c)
4. [Write a C Program to implement system function](Programs/Week&#32;6/Q4.c)

## Internals
1. [Write a C program to display the file content in reverse order using lseek system call.](Lab&#32;Internals/Q1.c)
2. [Write a C program](Lab&#32;Internals/Q2.c)
    1. to read first 20 characters from a file
    2. seek to 10th byte from the beginning and display 20 characters from there c. seek 10 bytes ahead from the current file offset and display 20 characters d. display the file size
3. [Write a C program to display various details of a file using stat structure (At least 5 fields)](Lab&#32;Internals/Q3.c)
4. [Write a C program to implement ls –li command which list the files in a specified directory. Your program should Print 5 attributes of files.](Lab&#32;Internals/Q4.c)
5. [Write a C program to remove empty files from the given directory.](Lab&#32;Internals/Q5.c)
6. [Write a C program to demonstrate the creation of soft links and the various properties of hard links](Lab&#32;Internals/Q6.c)
7. [Write a C program to Copy access and modification time of a file to another file using utime function.](Lab&#32;Internals/Q7.c)
8. [Write a C program to illustrate effect of setjmp and longjmp functions on register and volatile variables.](Lab&#32;Internals/Q8.c)
9. [Write C program to simulate copy command by accepting the filenames from command line. Report all errors.](Lab&#32;Internals/Q9.c)
10. [Write a C program to avoid zombie status of a process.](Lab&#32;Internals/Q10.c)
11. [Write a C program to demonstrate race condition among parent and child processes.](Lab&#32;Internals/Q11.c)

## Externals
1. [Write a C program to display the file content in reverse order using lseek system call.](Lab&#32;Externals/1.c)
2. [Write a C program to implement ls –li command which list the files in a specified directory. Your program should print 5 attributes of files.](Lab&#32;Externals/2.c)
3. [Write a C program to remove empty files from the given directory.](Lab&#32;Externals/3.c)
4. [Write a program to Copy access and modification time of a file to another file using utime function.](Lab&#32;Externals/4.c)
5. [Write a C program to illustrate effect of setjmp and longjmp functions on register and volatile variables.](Lab&#32;Externals/5.c)
6. [Write a C program to demonstrate race condition among parent and child processes.](Lab&#32;Externals/6.c)
7. [Write a C program to avoid zombie status of a process.](Lab&#32;Externals/7.c)
8. [Write a C program to demonstrate the initialization of a daemon process.](Lab&#32;Externals/8.c)
9. [Write a C program using sigaction system call which calls a signal handler on SIGINT signal and then reset the default action of the SIGINT signal.](Lab&#32;Externals/9.c)
10. [Write a C program (use signal system call)](Lab&#32;Externals/10.c)
    1. which calls a signal handler on SIGINT signal and then reset the default action of the SIGINT signal
    2. Which ignores SIGINT signal and then reset the default action of SIGINT signal
11. [Write a C program to create a file with permission 666 , mask the permission bits such that the original file permission after masking is 600, then display the modification time and access time of a file using utime function.](Lab&#32;Externals/11.c)
12. [Write a C program to implement client - server communication using pipes. Client should send a string to the server and it should change the first character of the string to uppercase and sends it back to client.](Lab&#32;Externals/Q12)