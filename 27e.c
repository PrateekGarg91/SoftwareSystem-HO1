/*
	Name: Prateek Garg
        Roll No.: MT2022081

        Q27.:  Write a program to execute `ls -Rl` by the following system calls 
        5. 'execvp' 

Question:  Write a program to execute `ls -Rl` by the following system calls 
    5. `execvp`
*/

#include <unistd.h>
#include <stdio.h>

void main()
{
    char *args[] = {"/bin/ls", "-Rl", "./test.txt", NULL};

    printf("============OUTPUT USING execvp===============\n");
    execvp(args[0], args);
    printf("\n");
}
