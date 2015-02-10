#include <stdio.h>

void c324()
{
    int i;
    puts("N\tN*10\tN*100\tN*1000");
    for (i = 1; i <= 10; printf("%d\t%d\t%d\t%d\n",i,10*i,100*i,1000*i),i++);
}