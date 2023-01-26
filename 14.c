/*
 	Name: Prateek Garg
	Roll No.: MT2022081

	Q14.: Write a program to find the type of a file.
	 a. Input should be taken from command line.
	 b. program should be able to identify any type of a file.

*/

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
int main (int argc, char *argv[])
{
       	struct stat buffer;
	stat(argv[1], &buffer);
	mode_t m;
	m=buffer.st_mode & S_IFMT;

	if(m==S_IFBLK)
		printf("Block special file\n");
	if(m==S_IFCHR)
		printf("Character special file\n");
	if(m==S_IFDIR)
		printf("Directory\n");
	if(m==S_IFIFO)
		printf("FIFO special file\n");
	if(m==S_IFREG)
		printf("Regular file\n");
	if(m==S_IFLNK)
		printf("Symbolic link\n");
	if(m==S_IFSOCK)
		printf("Socket\n");
	return 0;
}
