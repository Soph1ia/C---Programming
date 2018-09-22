// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"


int main(void)
{
	int choice;
	//Triangle Things:
	int tBase, tHeight;
	float tArea;
	//Square things:
	int sLength;
	float sArea;
	// rectangle things:
	int rWidth, rHeight;
	float rArea;
	//Parrallelogram things:
	int pBase, pHeight;
	float pArea;
	//circle
	float cRadius ,cArea, cCircum;

	//Asks if you want to repeat
	char ch;




	printf("Area Calculator: \n");
	printf("The Options Below: \n 1) <Triangle> \n 2) <Square> \n 3) <Rectangle> \n 4) <Parallelogram>\n 5) <Circle> \n");

	printf("Your Choice Here: ");
	scanf_s("%d", &choice);

	do {
		printf("Your Choice Here: ");
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Enter base here:");
			scanf_s("%d,", &tBase);
			printf("Enter height here: ");
			scanf_s("%d", &tHeight);
			//Calculates Triangle Area
			tArea = (tBase*tHeight) / 2;

			printf("The Area Of Your Triangle is: %.2f \n", tArea);
			break;

			//Square stuff
		case 2:
			printf("Enter Length of side: ");
			scanf_s("%d", &sLength);

			sArea = sLength*sLength;

			printf("The Area of the square is %.2f \n", sArea);
			break;

			//rectangle
		case 3:
			printf("Enter Width here: ");
			scanf_s("%d", &rWidth);
			printf("Enter height here: ");
			scanf_s("%d", &rHeight);

			rArea = rWidth*rHeight;

			printf("The Area is %.2f \n", rArea);
			break;

			//parallelogram
		case 4:
			printf("Enter The Base here:");
			scanf_s("%d", &pBase);
			printf("Enter Height here: ");
			scanf_s("%d", &pHeight);

			pArea = pBase*pHeight;

			printf("The Height is %.2f \n", pArea);
			break;

			//cirlce
		case 5:
			printf("Enter Radius here:");
			scanf_s("%.2f", &cRadius);

			cArea = 3.14*(cRadius*cRadius);
			cCircum = 2 * 3.14*cRadius;

			printf("Area is %.2f and Circumference is %.2f", cArea, cCircum);

		default:
			printf("Please Enter Valid Number");
			printf("Do you want to repeat the operation Y/N: ");
			scanf_s(" %c", &ch);
		}
		printf("Do you want to repeat the operation Y/N: ");
		scanf_s(" %c", &ch);
	}
	while (ch == 'y' || ch == 'Y');
}