/*
 		Name: Prateek Garg
		Roll No.: MT2022081

		Q17.: Write a program to simulate online ticket reservation. Implement write lock. Write a program to open a file, store a ticket number and exit.

*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main (void) {
	int fd;
	struct
	{
	int ticket_number;
	} member;
	member.ticket_number=10;
	fd=open ("database",O_CREAT|O_RDWR,0744);
	write(fd,&member,sizeof(member));
	close(fd);
	fd=open("database",O_RDONLY);
	read(fd,&member,sizeof(member));
	printf("Ticket no: %d\n",member.ticket_number);
	close(fd);
	
	return 0;
}
