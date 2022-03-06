#include <stdlib.h>
#include <stdio.h>

void plusMinus(int arr_count, int* arr) {
    float plus = 0, minus = 0, zeros = 0;
    int i;
    for(i = 0; i < arr_count; i++)
    {
        arr[i] > 0 ? (plus++) : (arr[i] < 0 ? minus++ : zeros++);
    }

    printf("%.6f\n%.6f\n%.6f", plus/arr_count, minus/arr_count, zeros/arr_count);
}

int main()
{
	int arr[]={1, 1, 0, -1, -1};
	plusMinus(5, arr);
	return 0;
}