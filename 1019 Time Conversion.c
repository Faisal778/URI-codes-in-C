#include <stdio.h>

int main()
{
    int a,s,m,h;
    scanf("%d",&a);
    
    h=a/3600;
    a= a%3600;
    m= a/60;
    s= a%60;
   printf("%d:%d:%d\n",h,m,s);
    
    return 0;
}

/*  URI Online Judge | 1019
Time Conversion
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

Input Sample	Output Sample
556

0:9:16

1

0:0:1

140153

38:55:53

*/
