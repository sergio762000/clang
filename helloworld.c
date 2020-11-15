#include <stdio.h>


int main(int argc, char* argv[])
{
    int c;
    c = printf("Hello, world!\n");
    printf("Количество напечатанных символов = %3d\n", c - 1 );
    return 0;
}