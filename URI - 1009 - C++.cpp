#include <stdio.h>

int main (){
char NAME[20];
scanf("%s", &NAME);
double A, B, TOTAL;
scanf("%lf%lf",&A,&B);
TOTAL=A+(B/100)*15;
printf("TOTAL = R$ %.2f\n", TOTAL);
}

