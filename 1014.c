/*
 * Student ID: {{removed}}
 * Student Name: Steffan Drosinos Jones
 * Email: {{removed}}
 * Problem ID: 1014
 */
#include <stdio.h>
#include <math.h>

/* Function declaration */
int getInput(void);
void calculateLoop(int r1, int r2);
float calculateArea(int radius);
float calculateCircumference(int radius);
void printResults(void);

/* Global variables */
const float Pi = 3.14; /* Define Pi as constant, could also use #define */
float sumofareas=0.000; /* Sum of areas of all circles */
float sumofcircumferences=0.000; /* Sum of circumferences of all circles */

/* Program start */
int main(void)
{
    /* r1 <= r2 */
    int r1 = getInput(); /* Radius of circle 1 */
    int r2 = getInput(); /* Radius of circle 2 */
    if(r1 <= r2)  /* Check if r1 is more than r2 which is not allowed */
    {
        calculateLoop(r1, r2);
    }
    printResults(); /* print results */
    return 0;
}

/* Function to get and return console input */
int getInput(void)
{
    int radius;
    scanf("%d", &radius);
    return radius;
}

/* Function that loops the correct amount of times */
void calculateLoop(int r1, int r2)
{
    /* Repeat r2-r1 +1 times i.e. from 0 to r2-r1 */
    for(int i=0; i<=(r2-r1); i++)
    {
        int radius = r1+i; /* current radius */
        sumofareas += calculateArea(radius); /* add to area sum */
        sumofcircumferences += calculateCircumference(radius); /* add to circumferences sum */
    }
    return;
}

/* Function that calculates the area of a circle given its radius */
float calculateArea(int radius)
{
    float area = Pi*pow(radius, 2); /* Pi*r^2 */
    return area;
}

/* Function that calculates the circumference of a circle given its radius */
float calculateCircumference(int radius)
{
    float circumference = 2*(Pi*radius);
    return circumference;
}

/* Function that prints the results of the program */
void printResults(void)
{
    printf("%.3f\n%.3f\n", sumofareas, sumofcircumferences);
    return;
}
