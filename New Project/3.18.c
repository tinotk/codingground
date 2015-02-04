#include <stdio.h>
//#include <math.h>

int main(void)
{
    int sale;
    double salary;
    printf("%s","Enter sales in dollars (-1 to end): ");
    scanf("%d", &sale);
    while (sale != -1) 
        {
        salary = 200+.09* (float) sale;
        printf("Salary is: %.2f\n",salary);
        printf("%s","Enter sales in dollars (-1 to end): ");
        scanf("%d", &sale);
        }
}

