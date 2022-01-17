#include <stdio.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

void filecopy(int ifd, int ofd)
{
    int n;
    char buf[BUFSIZ];

    while ((n = read(ifd, buf, BUFSIZ)) > 0)
         for(int i=0; i < n; i++)
        {
          buf[i] = toupper(buf[i]);
        
          if (write(ofd, buf, n) != n)
          {
            perror("cat error: cannot write");
          }
          }
}

int main(int argc, char *argv[])
{
    int fd;

    if (argc == 1)
    {
        filecopy(0, 1);
    }
    else
        while (--argc > 0)
            if ((fd = open(*++argv, O_RDONLY)) == -1)
            {
                perror("cat error:can't open file");
            }
            else
            {
                filecopy(fd, 1);
                close(fd);
            }
}


//for(int i=0; buff[i]!='\0'; i++)
        // {
        // buff[i] = toupper(buff[i]);
        // }