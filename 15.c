/*
 	Name: Prateek Garg
	Roll No.: MT2022081

	Q15.: Write a program to display the environmental variable of the user (use environ).

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main (void)
{
	extern char **environ;
	int k=0;
	while(environ[k])
	{
		printf("%s\n",environ[k]);
		k+=1;
	}
	return 0;
}
