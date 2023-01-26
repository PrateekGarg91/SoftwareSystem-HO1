
/*
 	Name: Prateek Garg
	Roll No.: MT2022081

	Q10.: Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10bytes (use lseek) and write again 10bytes.
 	a. check the return value of lseek
	b. open the file with od and check the empty spaces in between the data. 
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int main (void) {
	int fd,l;
	fd=open("output10",O_RDWR|O_CREAT,0744);
	write (fd,"naturelove",10);
	l=lseek(fd,10,SEEK_CUR);
	write (fd,"megastarss",10);
	printf("Return Value of fseek is %d\n",l);
}
