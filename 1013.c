/*
 * Student ID: {{removed}}
 * Student Name: Steffan Drosinos Jones
 * Email: {{removed}}
 * Problem ID: 1013
 */
#include <stdio.h>

/* Functions declaration */
int getInput(void);
void checkMark(int mark);
void printResults(void);

/* Global variables */
int highMark=0; /* A mark more than or equal to 85 */
int midMark=0; /* A mark between 60-84 */
int lowMark=0; /* A mark lower than 60 */

/* Program start */
int main(void)
{
	int mark = getInput();
	while(mark != 0)
	{
		checkMark(mark);
		mark = getInput();
	}
	printResults();
	return 0;
}

/* Function to get and return console input */
int getInput(void)
{
	int input;
	scanf("%d", &input);
	return input;
}

/* Function to check the inputted mark, returns nothing(void) */
void checkMark(int mark)
{
	if(mark >= 85) /* 85-100 */
	{
		highMark++;
	}
	else if(mark >= 60) /* 60-84 */
	{
		midMark++;
	}
	else /* 1-59 */
	{
		lowMark++;
	}
	return;
}

/* Function to print the mark results, returns nothing(void) */
void printResults(void)
{
	printf(">=85:%d\n60-84:%d\n<60:%d\n", highMark, midMark, lowMark);
	return;
}
