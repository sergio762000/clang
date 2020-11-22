#include <stdio.h>
void string_cp(char *dest, char *src);

int main()
{
    char *src, *dest;
    
    char from[5] = "test";
    char to[5] = "";
    
    src = &from[0];
    dest = &to[0];    
    
    string_cp(dest, src);   
    
    return 0;
}

void string_cp(char *dest, char *src)
{
    printf("До копирования: \n");
    printf("from = %s\n", src);
    printf("to = %s\n", dest);
    
    int i;
    for(i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = 0;
    
    printf("После операции копирования:\n");
    printf("from = %s\n", src);
    printf("to = %s\n", dest);
    
}