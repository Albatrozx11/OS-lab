#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>

void main(){
	struct stat s;
	stat("Status.c",&s);
	printf("size of program : %ld\n",s.st_size);
	printf("device id: %ld\n",s.st_dev);
	printf("last accessed: %s\n",ctime(&s.st_atime));
	printf("last modified: %s\n",ctime(&s.st_mtime));
}
