#include <stdio.h>

int main()
{
	int m[5] = {1, 2, 3, 5, 7};
	int n[] = {1, 2, 3, 5, 7};
	
	int i;
	
	for(i = 0; i < sizeof(m)/sizeof(*m); i++) {
		printf("m[%d] = %d\n", i, *(m + i));
	}
	
	for(i = 0; i < sizeof(n)/sizeof(n[0]); i++) {
		printf("n[%d] = %d\n", i, i[n]);
	}

}