/*
	Name: Prateek Garg
        Roll No.: MT2022081

        Q27.:  Write a program to execute `ls -Rl` by the following system calls 
        4. 'execv' 

*/

#include <unistd.h>
#include <stdio.h>

void main()
{
    char *args[] = {"/bin/ls", "-Rl", "./test.txt", NULL};

    printf("============OUTPUT USING execv===============\n");
    execv(args[0], args);
    printf("\n");
}
