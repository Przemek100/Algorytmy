#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int
main()
{
	float a, b, c, x;
	printf("Podaj współczynnik a =\n");
	scanf("%f", &a);
	printf("Podaj współczynnik b =\n");
	scanf("%f", &b);
	printf("Podaj współczynnik c =\n");
	scanf("%f", &c);
	if(a==0)
	printf("Równanie sprzeczne \n");
	else
	x=((c-b)/a); /* ax+b=c  można zapisać jako ax=c-b -> x=c-b/a*/
	printf("x wynosi %f\n", x);
	system("PAUSE");
	return 0;
}
