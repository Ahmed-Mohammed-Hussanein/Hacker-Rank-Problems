#include <stdlib.h>
#include <stdio.h>

#define SIZE(arr) sizeof(arr)/sizeof(arr[0])

int* breakingRecords(int scores_count, int* scores, int* result_count) 
{
    int *result = (int*)calloc(2, sizeof(int));
    int max = scores[0], min = scores[0];
    
    int i;
    for(i = 1; i < scores_count; i++)
    {
        if(scores[i] > max)
        {
            result[0]++;
            max = scores[i];
        }
            
        else if(scores[i] < min)
        {
            result[1]++;
            min = scores[i];
        }
    }

    *result_count = 2;

    return result;
}

int main()
{
	int arr1[] = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};
	int p;
	int *q = breakingRecords(10, arr1, &p);

	printf("%d %d\n", q[0], q[1]);

	return 0;
}