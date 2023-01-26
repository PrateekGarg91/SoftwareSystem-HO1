/*
 	
	Name: Prateek Garg
	Roll No.: MT2022081

	Q18.:Write a program to perform Record locking.
	 a. Implement write lock
	 b. Implement read lock
       	Create three records in a file. Whenever you access a particular record, first lock it then modify/access to avoid race condition.

*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main (void) {
int i,filedes;
struct
{
	int count;
} rec[3];
for(i=0;i<3;i++){
rec[i].count=0;
}
filedes=open("rec.txt",O_CREAT|O_RDWR,0744);
write(filedes,rec,sizeof(rec));
close(filedes);
}
