#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

void main(){
	struct dirent *d_ptr;
	char s[100];
	printf("Enter name of directory:");
	scanf("%s",s);
	DIR *dirPtr;
	dirPtr = opendir(s);
	if(dirPtr==NULL){
		printf("no such directory  exists");
		exit(1);
	}
	printf("contents of directory:\n");
	while(d_ptr = readdir(dirPtr)){
		printf("%s\n",d_ptr->d_name);
	}
	closedir(dirPtr);
}
