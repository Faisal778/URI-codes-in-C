#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",a);
    if (a>0 && a<1000000)
    {
        printf("%d nota(s) de R$ 100,00\n",  a/100);
        a=a%100;
        printf("%d nota(s) de R$ 50,00\n", a/50);
        a=a%50;
        printf("%d nota(s) de R$ 20,00\n", a/20);
        a=a%20;
        printf("%d nota(s) de R$ 10,00\n", a/10);
        a=a%10;
        printf("%d nota(s) de R$ 5,00\n", a/5);
        a=a%5;
        printf("%d nota(s) de R$ 2,00\n", a/2);
        a=a%2;
        printf("%d nota(s) de R$ 1,00\n", a/1);
     
    }
    return 0;
}

/*  URI Online Judge | 1018
Banknotes
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 e 1. Print the read value and the list of banknotes.

Input
The input file contains an integer value N (0 < N < 1000000).

Output
Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.

Input Sample	Output Sample
576

576
5 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
1 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
0 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00

11257

11257
112 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
0 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
1 nota(s) de R$ 2,00
0 nota(s) de R$ 1,00

503

503
5 nota(s) de R$ 100,00
0 nota(s) de R$ 50,00
0 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
0 nota(s) de R$ 5,00
1 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00

*/
