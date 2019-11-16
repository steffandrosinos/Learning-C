/*
 * Student ID: {{removed}}
 * Student Name: Steffan Drosinos Jones
 * Email: {{removed}}
 * Problem ID: 1025
 */
#include <stdio.h>

/* Function declaration */
int getInput(void);
int gcd(int n1, int n2);
int lcm(int n1, int n2, int gcd);
void printResults(void);

/* Global variables */
int gcdvalue, lcmvalue;

/* Program star */
int main(void)
{
    /* Get 2 inputted integers */
    int n1 = getInput();
    int n2 = getInput();
    /* Calculate gcd and lcm of given input */
    gcdvalue = gcd(n1, n2);
    lcmvalue = lcm(n1, n2, gcdvalue);
    /* Print results */
    printResults();
    return 0;
}

/* Function to get and return console input */
int getInput(void)
{
    int integer;
    scanf("%d", &integer);
    return integer;
}

/* Function to calculate the greatest common divisor of 2 integers */
int gcd(int n1, int n2)
{
    int gcd;
    /* loop until i is more than than n1 or n2 */
    for(int i=1; (i<=n1)&&(i<=n2); i++)
    {
        /* if n1 MOD i and n2 MOD i then i is a common divisor */
        if((n1%i == 0) && (n2%i == 0)) /* No need to brackets due to one line if :D */
            gcd=i;
    }
    return gcd;
}

/* Function to calculate the least common multiple of two integers */
int lcm(int n1, int n2, int gcd)
{
    int lcm = (n1*n2)/gcd;
    return lcm;
}

/* Function to print the mark results, returns nothing(void) */
void printResults(void)
{
    printf("%d %d\n", gcdvalue, lcmvalue);
    return;
}
