#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main( int argc, char *argv[]){
	int x, fd, fr, r, i;
	char a[1];
	char ar[10];
	fd = open(argv[2],O_RDONLY);
	if( fd == -1){
		printf("open failed");
		return 1;
	}
	printf("%s\n", argv[1]);
	strcpy( ar, argv[1]);
	printf("%s\n", ar);
	while(x = read(fd, a, 1)){
		for( i = 0; i < x; i++){
			putchar(a[i]);
		}	
	
}
