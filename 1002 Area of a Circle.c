#include <stdio.h>

int main()
{
   double A,R,n;
   
   n=3.14159;
   
   scanf("%lf", &R);
   
   A=R*R*n;
   printf("A=%.4lf\n", A);
 

    return 0;
}

/*  URI Online Judge | 1002
Area of a Circle
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159:

Calculate the area using the formula given in the problem description.

Input
The input contains a value of floating point (double precision), that is the variable R.

Output
Present the message "A=" followed by the value of the variable, as in the example bellow, with four places after the decimal point. Use all double precision variables. Like all the problems, don't forget to print the end of line after the result, otherwise you will receive "Presentation Error".

Input Samples	Output Samples
2.00

A=12.5664

100.64

A=31819.3103

150.00

A=70685.7750

*/
