/*
 	Name: Prateek Garg
	Roll No.: MT2022081

	Q16. Write a program to perform mandatory locking.
 	a. Implement write lock 

*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main (void)
{
	struct flock lock;
	int fd;
	fd=open("db",O_RDWR);
	lock.l_type=F_WRLCK;
	lock.l_whence=SEEK_SET;
	lock.l_start=0;
	lock.l_len=0;
	lock.l_pid=getpid();
	printf("Before Entering Into Critical Section\n");
	fcntl(fd,F_SETLKW,&lock);
	printf("Inside The Critical Section....\n");
	printf("Enter To Unlock..\n");
	getchar();
	printf("Unlocked\n");
	lock.l_type=F_UNLCK;
	fcntl(fd,F_SETLK,&lock);
	printf("FINISH\n");

	return 0;

}

