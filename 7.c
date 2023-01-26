/*
 	Name: Prateek Garg
	Roll No.: MT2022081

	Q7.:  Write a program to copy file1 into file2 ($cp file1 file2).
*/


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int main (void) {
	char arr[100];
	int fd,fd1;
	int length;
	fd=open("test.txt",O_RDONLY);
	length=read(fd,arr,sizeof(arr));
	fd1=open("test1.txt",O_WRONLY);
	write(fd,arr,length);
	close(fd);
	close(fd1);
}
