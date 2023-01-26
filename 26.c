/*
 	Name: Prateek Garg
	Roll No: MT2022081

	Q26.: Write a program to execute an executable program.
	 a. use some executable program
	 b. pass some input to an executable program. (for example execute an executable of $./a.out name)

*/

#include <unistd.h> 

void main()
{
    char *executable_path = "./25.o";

    execl(executable_path, executable_path, NULL);
}
