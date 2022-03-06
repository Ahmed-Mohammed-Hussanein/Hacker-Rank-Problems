#include <stdio.h>
#include <stdio.h>

void miniMaxSum(int arr_count, int* arr) {
	long long int miniSum = 0, maxSum = 0, sum = 0; 
	int i, j;
	for(i = 0; i < arr_count; i++)
	{
		for(j = 0; j < arr_count; j++)
		{
			if(j != i)
				sum += arr[j];
		}
		if(i == 0)
		{
			miniSum = sum;
			maxSum = sum;
		}
		if(sum < miniSum)
			miniSum = sum;
		if (sum > maxSum)
			maxSum = sum;
		sum = 0;
	}
	printf("%lld %lld", miniSum, maxSum);
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 3, 5, 7, 9};
	miniMaxSum(5, arr);
	return 0;
}