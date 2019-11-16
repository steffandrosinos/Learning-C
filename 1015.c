/*
 * Student ID: {{removed}}
 * Student Name: Steffan Drosinos Jones
 * Email: {{removed}}
 * Problem ID: 1015
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
