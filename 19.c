/*
 	Name: Prateek Garg
	Roll No: MT2022081

	Q19.: Write a program to find out time taken to execute getpid system call. Use time stamp counter.  

*/

#include <sys/time.h>  
#include <sys/types.h> 
#include <unistd.h>    
#include <stdio.h>     


#ifdef _MSC_VER
#include <intrin.h>
#else
#include <x86intrin.h>
#endif

void main()
{
    int start, end, pid;
    struct timeval timestamp;

    start = __rdtsc();
    pid = getpid();
    end = __rdtsc();

    printf("PID: %d\n", pid);
    printf("Time taken by getpid(): %d \n", (end - start));
}

