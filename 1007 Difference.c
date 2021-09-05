#include <stdio.h>

int main()
{
    int a,b,c,d,x;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    x= (a*b-c*d);
    
    printf("DIFERENCA = %d\n",x);

    return 0;
}


/*  URI Online Judge | 1007
Difference
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

Input
The input file contains 4 integer values.

Output
Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.

Input Samples	Output Samples
5
6
7
8

DIFERENCA = -26

0
0
7
8

DIFERENCA = -56

5
6
-7
8

DIFERENCA = 86

*/
