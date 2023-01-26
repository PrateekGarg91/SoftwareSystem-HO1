/*
 	Name: Prateek Garg
	Roll No.: MT2022081

	Q3. Write a program to create a file and print the file descriptor value. Use creat() system call
*/


#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd;
	fd=creat("newtempfile1",0744);
	printf("fd=%d\n",fd);

	return 0;
}
