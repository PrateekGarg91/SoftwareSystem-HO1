/*
 	Name: Prateek Garg
	Roll No.: MT2022081

	Q4: Write a program to open an existing file with read write mode. Try O_EXCL flag also.

*/

#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
int main()
{
	int fd,fd1;
	fd=open("newtempfile1",O_RDWR|O_EXCL,0744);
	fd1=open("newtempfile1",O_RDWR);
	printf("fd=%d\n fd1 = %d \n",fd,fd1);
	printf("errno=%d\n",errno);

	return 0;
}

