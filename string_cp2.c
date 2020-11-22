#include <stdio.h>
void string_cp2(char *dest, char *src);

int main()
{
    char *src, *dest;
    
    char from[5] = "test";
    char to[5] = "";
    
    src = &from[0];
    dest = &to[0];    
    
    string_cp2(dest, src);
    
    printf("После операции копирования:\n");
    printf("from = %s\n", src);
    printf("to = %s\n", dest);
    
    return 0;
}

void string_cp2(char *dest, char *src)
{
    
    while(*src) {
        *dest = *src;
        dest++;
        src++;
    } 
    *dest = 0;
}