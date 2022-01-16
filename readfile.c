#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int fd = open(argv[1], O_RDONLY);
    char buff[2048];
    int count = 1;

    while(count!= 0) 
    {
        count = read(fd, buff, 2048);
        write(1, buff, count);
    }
    close(fd);
}