// Brian Nuckles
// CPSC 223C Lab 2

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array[10000];
	float average = 0;
	float avgAverage = 0;

	printf("Enter the numbers you would like to be averaged, enter zero to end the set. A negative number will also end the set and not be counted.");

	for (int i = 0; i < 10000; i++)
	{
		
		scanf("%d", &array[i]);
		average = average + array[i];

		if (array[i] < 0)
		{
			array[i] = 0;
		}

		if (!array[i])
		{
			average = (average / 2);
			break;
		}					
	}

	for (int i = 0; i < 10000; i++)
	{
		if (array[i] >= average)
		{
			avgAverage = (avgAverage + array[i]);

		}
	}

	avgAverage = (avgAverage / 2);

	printf("The average of above average is ");
	printf("%g", avgAverage);
	
}