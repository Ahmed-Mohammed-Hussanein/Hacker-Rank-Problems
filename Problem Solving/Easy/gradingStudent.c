#include <stdlib.h>
#include <stdio.h>

int* gradingStudents(int grades_count, int* grades, int* result_count) 
{
	int *newGrades = (int*)malloc(grades_count * sizeof(int));
    int i;
    for(i = 0; i < grades_count; ++i)
    {
    	if(grades[i] >= 38 && 5 - (grades[i] % 5) < 3)
    		newGrades[i] = grades[i] + (5 - (grades[i] % 5));
    	else
    		newGrades[i] = grades[i];
    }

    *result_count = grades_count;
    return newGrades;
}

int main()
{
	int arr[] = {95, 69, 39, 28, 98};
	int n;
	int *p;
	p = gradingStudents(5, arr, &n);
	int i;
	for (i = 0; i < n; ++i)
	{
		printf("%d\n", p[i]);
	}
	return 0;
}