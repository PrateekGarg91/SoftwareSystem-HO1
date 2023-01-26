/*
 	Name: Prateek Garg
	Roll No: MT2022081

	Q8. Write a program to open a file in read only mode, read line by line and display each line as it is read. Close the file when end of file is reached.

*/


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int main (void) {
	int fd;
	char buffer;
	fd=open("test.txt",O_RDONLY);
	while(read(fd,&buffer,1))
	{
		if(buffer == '\n')
			getchar();
		else
			printf("%c",buffer);
	} 

	close(fd);

	return 0;
}
