#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>

int main()
{
	struct dirent *dir;
	struct stat mystat;
	DIR *dp;
	dp=opendir("/home/aman/college/usp/externals");
	if(dp)
	{
		while(dir=readdir(dp))
		{
			stat(dir->d_name,&mystat);
			printf("\n%ld %o %d %s %s",mystat.st_ino,mystat.st_mode,mystat.st_uid,ctime(&mystat.st_atime),dir->d_name);
		}
	}
}