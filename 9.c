/*
 	Mane: Prateek Garg
	Roll no: MT2022081
	
	Q9.: Write a program to print the following information about a given file - 
   	 1. Inode 
   	 2. Number of hard links 
   	 3. UID 
   	 4. GID 
   	 5. Size 
   	 6. Block size 
   	 7. Number of blocks 
   	 8. Time of last access 
   	 9. Time of last modification 
   	 10. Time of last change
*/

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>

int main (void){

        struct stat buffer;
	int status;
	int fd;
	fd=open("test.txt",O_RDWR|O_EXCL,0744);
	status=fstat(fd, &buffer);

	printf("Inode= %ld\n",buffer.st_ino);
	printf("Number of Hard-links= %ld\n",buffer.st_nlink);

	printf("Uid= %u\n",buffer.st_uid);
	printf("Gid= %u\n",buffer.st_gid);
	printf("Size= %ld\n",buffer.st_size);
	printf("Block Size= %ld\n",buffer.st_blksize);
	printf("Number of Blocks= %ld\n",buffer.st_blocks);
	printf("Time of Last Access= %s",ctime(&buffer.st_atime));
	printf("Time of Last Modification= %s",ctime(&buffer.st_mtime));
	printf("Time of Last Change= %s",ctime(&buffer.st_ctime));
}
