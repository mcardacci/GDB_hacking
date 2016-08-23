#include <stdio.h>

int main()
{
    printf("real uid: %d\n", getenv("USERNAME"));
//    printf("effective uid: %d\n", gateuid());
}
