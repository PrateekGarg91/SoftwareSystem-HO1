/*
 	Name: Prateek Garg
	Roll No: MT2022081

	Q21.: Write a program, call fork and print the parent and child process id.

*/

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main()
{
    int chPid, parId;

    parId = getpid();

    printf("Parent PID: %d\n", parId);

    chPid = fork();

    if (chPid != 0)

        printf("Child PID: %d\n", chPid);
}




