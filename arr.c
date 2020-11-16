#include <stdio.h>

int main()
{
	int i;
	int arr[3];
	int *p;
	
	for(i = 0; i < 3; i++) {
		arr[i] = i;
	}
	
	for(i = 0; i < 3; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	for(i = 0; i < 3; i++) {
		printf("*(arr + %d) = %d\n", i, *(arr + i));
	}
	
	for(i = 0; i < 3; i++) {
		printf("%d[arr] = %d\n", i, i[arr]);
	}
	
	printf("sizeof(arr) = %ld\n", sizeof(arr));
	
	p = &arr[2];
	printf("Result (p - m) = %ld\n", p - arr);
}