#include <stdio.h>

int main () {
	double x, y, MEDIA, z;
	scanf ("%lf", &x);
	scanf ("%lf", &y);
	scanf ("%lf", &z);
	MEDIA = ((x*2)+(y*3)+(z*5))/10;
	printf ("MEDIA = %.1lf\n", MEDIA);
	return 0;

}
