#include <stdio.h>

int main()
{
    int a,day,month, year;
    scanf("%d",&a);
    
    year=a/365;
    a= a%365;
    month= a/30;
    day= a%30;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);
    
    return 0;
}
