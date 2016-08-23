#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "../helpers/hacking.h"

void usage(char *prog_name, char *filename)
{
    printf("Usage: %s <data to add to %s>\n", prog_name, filename);
    exit(0);
}

void fatal(char *);           // Function for fatal errors (in 'hacking.h') 
void *ec_malloc(unsigned int);// Function for safely allocating memory (in 'hacking.h')
                              // Error Check malloc() wrapper
int main(int argc, char *argv[])
{
    int userid, fd; // File Descriptor
    char *buffer, *datafile;

    buffer = (char *) ec_malloc(100);
    datafile = (char *) ec_malloc(20);
    strcpy(datafile, "/var/notes");
    
    if (argc < 2)  // If there isn't command line args
    {
        usage(argv[0], datafile); // display usage message and exit
    }

    strcpy(buffer, argv[1]); //Copy first arg into buffer

    printf("[DEBUG] buffer   @ %p: \'%s\'\n", buffer, buffer);
    printf("[DEBUG] datafile @ %p: \'%s\'\n", datafile, datafile);

    // Opening the file
    fd = open(datafile, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);
    
    if (fd == -1)
    {
        fatal("in main() while opening file");
    }
    printf("[DEBUG] file descriptor is %d\n", fd);

    userid = get

}


