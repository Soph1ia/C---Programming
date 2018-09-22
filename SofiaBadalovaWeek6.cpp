// SofiaBadalovaWeek6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len;

	int array[] = { 65,116,32,50,48,32,68,101,103,114,101,101,115,44,32,84,104,101,32,87,101,97,116,104,101,114,32,73,115,32,71,114,101,97,116,46 };

	i = 0;
	do
	{
		printf("%c", array[i]);
		i++;
	} while (array[i] != 46);
	printf("\n\n");

	j = 0;
	do {
		if (array[j] >= 90 && array[j]<=122) {
			array[j] = array[j] - 32;
		}
		j++;

	} while (array[j] != 46);
	printf("\n\n");
	
	j = 0;
	do
	{
		printf("%c", array[j]);
		j++;
	} while (array[j] != 46);
	printf("\n\n");

	k = 0;
	do {
		if (array[k] >=65 && array[k] <= 90) {
			array[k] = array[k] + 32;
		}
		k++;

	} while (array[k] != 46);
	printf("\n\n");

	k = 0;
	do
	{
		printf("%c", array[k]);
		k++;
	} while (array[k] != 46);
	printf("\n\n");


	
	




}

