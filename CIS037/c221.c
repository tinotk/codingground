#include <stdio.h>

void c221(void)
{
	unsigned int counter; // number of grades entered
	int grade; // grade value
	int total; // sum of grades

	float average;
	total = 0;
	counter = 0;

	printf("%s", "Enter grade, -1 to end: ");
	scanf_s("%d", &grade);

	while (grade != -1) {
		total = total + grade;
		counter = counter + 1;
		printf("%s", "Enter grade, -1 to end: ");
		scanf_s("%d", &grade);
	}

	if (counter != 0) {
		average = (float)total / counter;
		printf("Class average is %.2f\n", average);
	}
	else
		puts("No grade received");
}