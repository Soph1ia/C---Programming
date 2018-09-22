// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"


int main()
{
	double number[10];
	int i;
	double sum = 0;
	double average = 0;
	double max = 0;
	double min =0;

	printf("Enter up to 10 numbers <print 0 to end input> \n");

	for (i = 0; i < 10; i++)
	{
		printf(" enter number %d = ", i + 1);
		scanf_s("%lf", (number + i));
		if (i == 0) 
		{
			min = number[0];

		}
		if (number[i] == 0.0)
		{
			break;
		}
	}
	for (i = 0; i < 10; i++)
		if (number[i] == 0.0) { continue; }

		else { sum = sum + number[i]; }



		if (number[0] == 0)
		{
			printf("No numbers entered quiting \n");

		}
		else
		{
			printf("Total: %.2lf \n", sum);

			average = sum / 10;

			printf("Average is: %.2lf \n", average);
		}
		
		for (i = 0; i < 10; i++)
		{
			if (number[i] > max)
			{
				max = number[i];
			}
		}
		
		printf("Max is = %.2lf \n", max);

		for (i = 0; i < 10; i++)
		{
			if (number[i] < min)
			{
				min = number[i];
			}
		}
		printf("Min is = %.2lf \n ", min);
	}

