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
struct
{
int count;
} record[3];
int n;
char c;
printf("Which record to access out of the 3?\n");
scanf("%d",&n);
struct flock lock;
int fd;
fd=open("rec.txt",O_RDWR);
read(fd,record,sizeof(record));
int l=sizeof(record)/sizeof(int);
lock.l_type=F_RDLCK;
lock.l_whence=SEEK_SET;
lock.l_start=(n-1)*(sizeof(record)/l);
lock.l_len=sizeof(record)/l;
lock.l_pid=getpid();
printf("Before Entering Into Critical Section\n");
fcntl(fd,F_SETLKW,&lock);
printf("Current Count for record %d: %d\n",n,record[n-1].count);
record[n-1].count++;
lseek(fd,0,SEEK_SET);
printf("Inside The Critical Section....\n");
printf("Enter To Unlock..\n");
write(fd,record,sizeof(record));
scanf(" %c",&c);
printf("Unlocked\n");
lock.l_type=F_UNLCK;
fcntl(fd,F_SETLK,&lock);
printf("FINISH\n");

return 0;
}
