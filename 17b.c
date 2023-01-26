/*
 		Name: Prateek Garg
		Roll No.: MT2022081

		Q17.: Write a program to simulate online ticket reservation. Implement write lock. Write a program to open a file, store a ticket number and exit.

		Write a separate program, to open the file, implement write lock, read the ticket number, increment the number and print the new ticket number then close the file.

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
	struct flock lock;
	fd=open("database",O_RDWR);
	read(fd,&member,sizeof(member));
	lock.l_type=F_WRLCK;
	lock.l_whence=SEEK_SET;
	lock.l_start=0;
	lock.l_len=0;
	lock.l_pid=getpid();
	printf("Before entering into the critical section!\n");
	fcntl(fd,F_SETLKW,&lock);
	printf("Current ticket number: %d\n",member.ticket_number);
	member.ticket_number+=1;
	lseek(fd,0,SEEK_SET);
	printf("Inside critical section!\n");
	printf("Press any key to unlock!\n");
	write(fd,&member,sizeof(member));
	getchar();
	lock.l_type=F_UNLCK;
	printf("Unlocked!\n");
	fcntl(fd,F_SETLK,&lock);
	printf("Terminate!\n");
}
