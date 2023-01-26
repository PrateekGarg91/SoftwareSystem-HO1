/*
 * 	Name: Prateek Garg
 * 	RollNo : MT2022081
 *
 * 	Q1. Create the following types of a files using system call
	 b. hard link (link system call)
 */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main (void) {
	link ("test.txt", "hardlink") ;
	perror("link ret: ");
}
