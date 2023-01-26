/*

	Name: Prateek Garg
	Roll No.: MT2022081
	Q27:  Write a program to execute `ls -Rl` by the following system calls 
	1.'execl' 
*/

#include <unistd.h> 
#include <stdio.h>  

void main()
{
    char *command_path = "/bin/ls";
    char *options = "-Rl";
    char *file_arg = "./test.txt"; 

    printf("============OUTPUT USING execl===============\n");
    execl(command_path, command_path, options, file_arg, NULL);
    printf("\n");
}
