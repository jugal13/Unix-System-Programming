#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <utime.h>
#include <time.h>


int main()
{
	struct utimbuf times;
	struct stat mystat;
	umask(0066);
	if(creat("dummy",0666)<0)
	{
		printf("Error in file creation");
		exit(0);
	}
	stat("dummy",&mystat);
	times.actime=mystat.st_atime;
	times.modtime=mystat.st_mtime;
	utime("dummy",&times);
	printf("%s %s",ctime(&times.actime),ctime(&times.modtime));
	printf("%s %s",ctime(&mystat.st_atime),ctime(&mystat.st_mtime));
	return 0;
}