#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void main(){
	pid_t child = fork();
	if(child==-1){
		printf("Child creation unsucessfull");
		exit(EXIT_FAILURE);
	}
	else{
		//parent process
		printf("child created: %d\n",getpid());
	}
	
	pid_t w = wait(NULL);
	printf("%d\n",w);
	execlp("ls","ls",NULL);
}
