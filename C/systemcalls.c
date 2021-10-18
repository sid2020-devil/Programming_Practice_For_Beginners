#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
int main(void)
{
	char * path, path1[10];
	struct stat *nfile;
	nfile = (struct stat*)malloc(sizeof(struct stat));
	printf("enter the name of whose satistics has to be stored");
	scanf("%s", path);
	stat(path1, nfile);
	printf("userid %ld \n", nfile ->st_uid);
	printf("blocksize: %ld \n", nfile->st_blksize);
	printf("last access time: %ld \n", nfile->st_atime);
	printf("time of last modification: %d\n", nfile->st_atime);
	printf("production node: %ld\n", nfile->st_mode);
	printf("size of file %ld \n", nfile->st_size);
	printf("Number of links %ld \n", nfile->st_nlink);
}
