/*
 	Name: Prateek Garg
	Roll No.: MT2022081

	Q1. 1. Create the following types of a files using system call
 	c. FIFO (mkfifo Library Function or mknod system call)
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
int main (void) {
mknod("mynod", S_IFIFO | 0666, 0);
}
