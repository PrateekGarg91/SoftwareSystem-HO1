/*
 	Name: Prateek Garg
	Roll No.: MT2022081
	
	Q5: Write a program to create five new files with infinite loop. Execute the program in the background and check the file descriptor table at /proc/pid/fd.

*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int main (void) {
	int fd1,fd2,fd3,fd4,fd5;

	fd1=open("file1",O_RDWR);
	fd2=open("file2",O_RDWR);
	fd3=open("file3",O_RDWR);
	fd4=open("file4",O_RDWR);
	fd5=open("file5",O_RDWR);
	
	while(1);
	getchar();
}
