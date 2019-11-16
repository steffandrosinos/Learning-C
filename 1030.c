/*
 * Student ID: {{removed}}
 * Student Name: Steffan Drosinos Jones
 * Email: {{removed}}
 * Problem ID: 1030
 */
#include <stdio.h>
#include <math.h>

/* Function declaration */
int getInput(void);
double shortenDouble(double value, int n);

/* Global variables */
int a, b, n;

/* Program start */
int main(void)
{
    a = getInput(); /* Get input for a */
    b = getInput(); /* Get input for b */
    n = getInput(); /* Get input for n */
    double divAB = (double)a/b; /* Divide A and B */
    double shortenAB = shortenDouble(divAB, n); /* Shift by n-1 */
    int nthvalue = shortenAB*10; /* Get nth value */
    printf("%d", nthvalue); /* Print results */
    return 0;
}

/* Function to get and return console input */
int getInput(void)
{
    int input;
    scanf("%d", &input);
    return input;
}

/* Function to shorten length of a double to the nth value needed */
double shortenDouble(double value, int n)
{
    /* Loop for n-1 times */
    for(int i=0; i<(n-1); i++)
    {
        value *= 10; /* Times value by 10 */
        int tempValue = value;
        value -= tempValue; /* 123.45 turns into 0.45 */
    }
    return value;
}
