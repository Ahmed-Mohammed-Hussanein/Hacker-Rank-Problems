#include <stdlib.h>
#include <stdio.h>

int* findPoint(int px, int py, int qx, int qy, int* result_count) 
{
	int *result = (int*)malloc(2 * sizeof(int));

	result[0] = qx + (qx - px);
	result[1] = qy + (qy - py);

	*result_count = 2;
	return result;
}


int main()
{
	int count;
	int *ptr = findPoint(-1,-1,1,1,&count);
	printf("%d %d\n", ptr[0], ptr[1]);

	return 0;
}