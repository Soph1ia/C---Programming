// ConsoleApplication23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "string.h"

void printShortestName(char names[][100], int num);
void printLongestName(char names[][100], int num);

int main()
{
	int size = 0;
	int i;
	char names[100][100];
	char sample[100];

	printf("How many names are you entering? ");
	scanf_s("%d", &size);

	gets_s(sample, 39);
	for (i = 0; i < size; i++) {
		printf("Enter the name %d \n ", i + 1);
		gets_s(names[i], 100);
	}

	printShortestName(names, size);
	printLongestName(names, size);
    return 0;
}


void printShortestName(char names[][100], int size)
{
	int  length=0;
	int shortLength=10000;
	int counter = 0;
	int i=0;		
	for (i = 0; i < size; i++) {

		length = strlen(names[i]);
		if (length < shortLength) {
			shortLength = length;
			counter = i;
		}
	}
	printf(" shortest string <length is %d> name is: %s \n", shortLength, names [counter]);
}

void printLongestName(char names[][100], int size)
{
	int  length = 0;
	int longestLength = 0;
	int counter = 0;
	int i = 0;
	for (i = 0; i < size; i++) {

		length = strlen(names[i]);

		if (length > longestLength) {
			longestLength = length;
			counter = i;
		}
	}
	printf(" Longest string <length is %d> name is; %s \n", longestLength, names[counter]);
}