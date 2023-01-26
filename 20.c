/*
 	Name: Prateek Garg
	Roll No: MT2022081
	
	Q20.:  Find out the priority of your running program. Modify the priority with nice command.

*/

#include <unistd.h> 
#include <stdio.h> 
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int priority, newpriority;
    if (argc != 2)
        printf("Please pass the integer value to be added to the current nice value\n");
    else
    {
        newpriority = atoi(argv[1]);
        priority = nice(0); // Get the priorty by adding 0 to current priorty
        printf("Current priority: %d\n", priority);
        priority = nice(newpriority); // Adds `newp` to the current priority
        printf("New priority: %d\n", priority);
    }
}

