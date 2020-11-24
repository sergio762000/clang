#include <stdio.h>

void string_copy1(char *dest, const char *src);
void string_copy2(char *dest, const char *src);

int main()
{
	char *dest, *src;
	char from[5] = "post1";
	char to[5];
	
	src = &from[0];
	dest = &to[0];
	
	string_copy1(dest, src);
	printf("string_copy1: Содержимое to[] = %s\n", to);
	
	dest = src = NULL;
	
	char from2[5] = "post2";
	char to2[5];
	
	src = &from2[0];
	dest = &to2[0];
	
	string_copy2(dest, src);
	printf("string_copy2: Содержимое to[] = %s\n", to2);
/*	
	char from[5] = "post3";
	char to[5];
	
	src = &from[0];
	dest = &to[0];
	
	string_copy3(dest, src);
	printf("string_copy3: Содержимое to[] = %s\n", to);
	
	char from[5] = "post4";
	char to[5];
	
	src = &from[0];
	dest = &to[0];
	
	string_copy4(dest, src);
	printf("string_copy4: Содержимое to[] = %s\n", to);
*/
}

void string_copy1(char *dest, const char *src)
{
	int i;
	for(i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = 0;

}

void string_copy2(char *dest, const char *src)
{
	while(*src) {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
}