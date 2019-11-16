/*
 * Student ID: 201275923
 * Student Name: Steffan Drosinos Jones
 * Email: s.d.jones@student.liverpool.ac.uk
 *
 * User: sgsjone9
 *
 * Problem ID: 1015
 * RunID: 29145
 * Result: Accepted
 */
#include <stdio.h>

/* Program Start */
int main(void)
{
    int ascii;
    int sf;
    while(sf = scanf("%d", &ascii))
    {
        if(sf == -1) /* Check for EOF */
        {
            break; /* if EOF break while loop */
        }
        putchar(ascii); /* Print ASCII to STDOUT */
    }
    return 0;
}