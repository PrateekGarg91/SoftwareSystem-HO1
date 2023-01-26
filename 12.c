/*
 	Name: Prateek Garg
	Roll No.: MT2022081

 	Q12.: Write a program to find out the opening mode of a file. Use fcntl.
*/


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int main (void) {
	int ft;
	int k;
	ft=open("out12fcntl",O_CREAT|O_RDONLY,0744);
	k=fcntl(ft,F_GETFL);
	printf("Access-mode feild is: %d\n",k);
	close(ft);
}

