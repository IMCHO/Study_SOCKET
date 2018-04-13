//Please run at linux
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 100

int main()
{
	int fd;
	int fd2;
	char buf[BUF_SIZE];
	fd = open("src.txt", O_RDONLY);

	read(fd, buf, sizeof(buf));

	fd2 = open("dst.txt", O_CREAT | O_WRONLY | O_TRUNC);
	write(fd2, buf, sizeof(buf));

	close(fd);
	close(fd2);
	return 0;
}