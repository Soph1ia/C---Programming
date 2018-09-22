// SofiaBadalovaLab2cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"


void main()
{
	float english, french, maths, irish, science, highest = 0;
	float averageMark;

	/* User must input marks for each subject*/

	printf("Please Insert Marks for English: ");
	scanf_s("%f", &english);
	printf("Please Insert Marks for French: ");
	scanf_s("%f", &french);
	printf("Please Insert Marks for Maths: ");
	scanf_s("%f", &maths);
	printf("Please Insert Marks for Irish: ");
	scanf_s("%f", &irish);
	printf("Please Insert Marks for Science: ");
	scanf_s("%f", &science);
	printf("\n");

	

	averageMark = (english + french + maths + irish + science) / 5; // Calculates Average Mark//

	printf("Average Mark is= %2.f \n", averageMark);
 
	
printf("Fails:"); // Prints What subjects failed//

	if ( english < 40)
	{
		printf(" English,");
	}
	if (maths < 40)
	{
		printf(" Maths, ");
	}
	if (irish < 40)
	{
		printf("  Irish, ");
	}
	if (french < 40)
	{
		printf(" French, ");
	}
	if (science < 40)
	{
		printf("  Science, ");
	}
	printf("\n");
	

	printf("Passed:"); // Prints What subjects Passed//

	if (english > 40)
	{
		printf(" English,");
	}
	if (maths > 40)
	{
		printf(" Maths, ");
	}
	if (irish > 40)
	{
		printf("  Irish, ");
	}
	if (french > 40)
	{
		printf(" French, ");
	}
	if (science >40)
	{
		printf("  Science, ");
	}
	printf("\n");

	// Calculates highest mark// 
	int flag = 0; 
		highest = english;

	if (irish > highest)
	{
		highest = irish;
		flag = 1;
	}
	if (french > highest) 
	{
		highest = french;
		flag = 2;
	}
	if (maths > highest)
	{
		highest = maths;
		flag = 3;
	}
	if (science > highest)
	{
		highest = science ;
		flag = 4;
	}
	
	printf("Highest Mark = %d in ", highest);

	// Prints exactly what subject was highest mark//

	if (flag == 0)
	{
		printf("English ");
	}
	if (flag == 1)
	{
		printf("Irish ");
	}
	if (flag == 2)
	{
		printf("French");
	}
	if (flag == 3)
	{
		printf("Maths ");
	}
	if (flag == 4)
	{
		printf("Science");
	}

	printf("\n");


}

