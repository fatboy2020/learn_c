#include <stdio.h>
int main(int argc, char const *argv[])
{
	int charge =0;
	double km = 0;
	double t = 0;
	double f = 0;
	scanf("%f %d",&km, %charge);
	if (km <=3){
		charge = 10;
	}
	else if (km <=10){
		t = km -3;
		charge = 10 + 2*t;
	}
	else  {
		f = km - 10;
		charge = 3 * f;

	}
	printf("%d\n",charge);
	return 0;
}