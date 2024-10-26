#include <stdio.h>
int main(int argc, char const *argv[])
{
	int Sum = 0;
	double Average = 0;
	int t, f,h,j =0;
	scanf("%d %d %d %d",&t,&f,&h,&j);
	Sum=t+f+h+j;
	Average=(double)Sum/4;
	printf("Sum =%d;Average = %1.f \n",Sum,Average);
	return 0;
}