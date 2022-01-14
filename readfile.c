#include <stdio.h>

#define BUFSIZE 1000
int main(int argc, char *argv[])
{
    FILE *fp = fopen(argv[1], "r");
    char buff[BUFSIZE];
    
    while(fgets(buff, BUFSIZE - 1, fp) != NULL) 
    {
        printf ("%s", buff); 
    }
    fclose(fp);
}