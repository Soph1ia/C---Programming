// SofiaBadalovaWeek7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include "string.h"

void main()
{
	int j = 0;
	int k = 0;
	char fullName[100];
	char firstName[30], middleName[30], surname[30];
	char intial;

	printf("enter full name: ");

	gets_s(fullName);
	printf("Thank you %s\n\n", fullName);

	// YOUR CODE GOES HERE

	//firstname
	j = 0;

	while (fullName[j] !=' ')
	{
		firstName[j] = fullName[j];
		j++;
	}
	firstName[j] = '\0';

	//initial 
	j++;
	intial = fullName[j];

	while (fullName[j] != ' ')
	{
		j++;
	}
	//surname
	
	k = 0;
	
	while (fullName[j] != '\0')
	{
		surname[k] = fullName[j];
		j++;
		k++;
	}
	surname[k] = '\0';

	printf("%s %c %s \n", firstName, intial, surname);
}

