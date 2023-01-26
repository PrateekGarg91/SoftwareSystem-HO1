 /*
 	Name: Prateek Garg
	Roll No.: MT2022081

	Q 1: Create the following types of a files using system call
	 a. soft link (symlink system call)

 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main (void) {
	symlink ("source", "sftlnk") ;
	perror("link ret: ");
}
