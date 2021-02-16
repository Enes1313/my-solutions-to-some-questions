#include <stdio.h>
#include <math.h>

/*
Calculate standard deviation: The function calculates the mean and the standard
deviation of the array recursively. The function returns standard deviation by 
default and the mean value returns by reference.
	
	double std_array(const int arr[], double *mean, int n, int index);
	
Don't use : static local variable, global variable, loop statements (for, while and with goto)
Don't write another function, macro.
Don't include another helper lib. 
Don't change the function signature.
*/

double std_array(const int arr[], double *mean, int n, int index)
{
	if (index == n) return 0;

	*mean += arr[index];
	double sum2power = arr[index] * arr[index] + std_array(arr, mean, n, index + 1);

	if (index != 0) return sum2power;

	*mean /= n;

	return sqrt((sum2power - n * (*mean) * (*mean)) / (n - 1));
}

int main()
{
	double mean = 0;
	int arr[] = { 3, 5, 7 };
	double x = std_array(arr, &mean, sizeof(arr) / sizeof(*arr), 0);

	printf("SD : %lf\nM : %lf", x, mean);
	
	return 0;
}
