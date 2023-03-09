#include <stdio.h>
#include <math.h>

int main()
{
	int test = 9;
	int number = test;
	int places = 0;

	// calculate 10s places.
	while(number != 0)
	{
		number = number / 10;
		places++;
	};


	//99 -> 9, 9
	//123 -> 3, 2, 1	
	//create an array of 10s factors
	int components[places];
	int deteriorate = test;
	int sum = 0;

	for (int i = 1; i <= places; i++)
	{
		int digit = deteriorate % (int) pow(10, i); //power of?;	
		deteriorate -= digit;
		components[i - 1] = digit / (int) pow(10, (i-1));
		//printf("%d ", components[i - 1]);	
		sum += (int) pow(components[i - 1], places);
	}



	printf("\n\nTest case: %d \n", test);
	printf("Sum of digits: %d \n", sum);
	
	if(sum == test)
	{
		printf("ARMSTRONG!\n");
	} else
	{
		printf("not armstrong\n");
	}


	return 0;
}
