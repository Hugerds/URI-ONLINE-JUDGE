#include <stdio.h>

int main () {
	int  B, NUMBER;
	scanf ("%d", &NUMBER);
	scanf ("%d", &B);
	
	float C, SALARY;
	scanf ("%f", &C);
	
	SALARY = B*C;	
	printf ("NUMBER = %d\n", NUMBER);
	printf ("SALARY = U$ %.2f\n", SALARY);
	
	return 0;

}
