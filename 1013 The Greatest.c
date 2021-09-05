#include <stdio.h>

int main()
{
  int a,b,c,maxab,max;
  
  scanf("%d %d %d", &a, &b, &c);
  
  maxab=((a+b+abs(a-b))/2);
  
  max= ( (maxab+c + abs(maxab-c))/2);
  
  printf("%d eh o maior\n", max);
  
  

    return 0;
}

/*  URI Online Judge | 1013
The Greatest
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:



Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.

Input Samples	Output Samples
7 14 106

106 eh o maior

217 14 6

217 eh o maior

*/
