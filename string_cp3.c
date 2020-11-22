#include <stdio.h>
void string_cp3(char *dest, const char *src);

int main()
{
    char *src, *dest;
    
    char from[5] = "post";
    char to[5] = "";
    
    src = &from[0];
    dest = &to[0];
    
    printf("До копирования: \n");
    printf("from = %s\n", src);
    printf("to = %s\n", dest);
    
    string_cp3(dest, src);
    
    printf("После операции копирования:\n");
    printf("from = %s\n", from);
    printf("to = %s\n", to);
    
    return 0;
}

void string_cp3(char *dest, const char *src)
{
    for(; *src; dest++, src++)
        *dest = *src;
    *dest = 0;
}