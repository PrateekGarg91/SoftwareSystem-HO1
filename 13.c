/*
 	Name: Prateek Garg
	Roll No.: MT2022081

	Q13.:  Write a program to wait for a STDIN for 10seconds using select. Write a proper print statement to verify whether the data is available within 10seconds or not.

*/

#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>
int main(void)
{
	int retval;
	fd_set set;
	struct timeval timeout;
	FD_ZERO (&set);
	FD_SET (STDIN_FILENO, &set);
	timeout.tv_sec = 10;
	timeout.tv_usec = 0;
	retval=select (FD_SETSIZE,&set, NULL, NULL,&timeout);
	if(retval==-1)
		perror("select()\n");
	else if(retval)
		printf("Input available\n");
	else
		printf("Timeout\n");

	return 0;
}
