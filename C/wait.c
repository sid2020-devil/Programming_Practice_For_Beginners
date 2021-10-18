#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	int pid, status, exitch;
	if((pid=fork())==-1)
	{
		perror("error");
		exit(0);
	}
	if(pid==0)
	{
		sleep(1);
		printf("child process");
		exit(0);
	}
	else
	{
		printf("parent process \n");
		if((exitch = wait(&status))==-1)
		{
	
			perror("during wait()");
			exit(0);
		}
		printf("parent existing\n");
		exit(0);
	}
}
