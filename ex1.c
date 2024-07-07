#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

void main(){
	char *args[] = {"hello",NULL};
	printf("pid of ex1.c : %d\n",getpid());
	execv("./ex2",args);
}
