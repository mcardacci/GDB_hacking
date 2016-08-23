#include <stdio.h>
#include <fcntl.h>

void display_flags(char *, unsigned int);
void binary_print(unsigned int);

int main(int argc, char *argv[])
{
    display_flags("O_RDONLY\t\t", O_RDONLY);
    display_flags("O_WRONDLY\t\t", O_WRONDLY);
    display_flags("O_RDWR\t\t\t", O_RDWR);
    printf("\n\)
}
