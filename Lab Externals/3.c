#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	struct dirent *dir;
	struct stat mystat;
	DIR *dp;
	dp = opendir("/Users/jugal13/Desktop/USP & CD/USP");
	if(dp)
	{
		while((dir=readdir(dp)))
		{
			stat(dir->d_name,&mystat);
			if(mystat.st_size==0)
			{
				unlink(dir->d_name);
			}
		}
	}
}