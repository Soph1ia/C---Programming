// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

void main() {

	int hoursWorked = 0;
	float basicRate = 25;
	float overTimeRate = 20;
	float pay = 0.0;

	printf("Enter hours Worked: ");
	scanf_s("%d", &hoursWorked);

	if (hoursWorked <= 40)
	{
		pay = hoursWorked*basicRate;
	}
	else
	{
		pay = 40 * basicRate + (hoursWorked - 40)*overTimeRate;
	}

	printf("Your worked %d hours, and earned %.2f \n", hoursWorked, pay);
}

