/*
 	Name: Prateek Garg
	Roll No: MT2022081

	Q22.: Write a program, open a file, call fork, and then write to the file by both the child as well as the parent processes. Check output of the file.

*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main()
{
    char *filename = "test.txt";
    int chPid, fileDescriptor;
    fileDescriptor = open(filename, O_CREAT | O_WRONLY | O_APPEND, S_IRWXU);

    if ((chPid = fork()) != 0)
        write(fileDescriptor, "Parent\n", 7);
    else 
        write(fileDescriptor, "Child\n", 6);
    close(fileDescriptor);
}


