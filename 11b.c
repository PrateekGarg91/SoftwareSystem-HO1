/*
 	Name: Prateek Garg
	Roll No. : MT2022081

	Q11.: Write a program to open a file, duplicate the file descriptor and append the file with both the descriptors and check whether the file is updated properly or not.
	 b. use dup2

*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
int main (void) {
	int fd1,fd2,length;
	char buffer[100];
	strcpy(buffer,"This is file descritor duplicate\n");
	length=strlen(buffer);
	fd1=open("output11bdup2",O_CREAT|O_RDWR,0744);
	dup2(fd1,fd2);
	write(fd1,buffer,length);
	write(fd2,buffer,length);
	close(fd1);
	close(fd2);
}
