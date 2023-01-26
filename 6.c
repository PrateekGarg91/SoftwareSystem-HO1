/*
 	Name: Prateek Garg
	Roll No. : MT2022081

	Q6:  Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
*/


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int main (void) {
	int i;
	char array[40];
	i = read(0,array,sizeof(array));
	write(1,array,i);
}
