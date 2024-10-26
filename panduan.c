#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int a[6] , i, t, j;
	for(i=1;i<=5;i++)
		scanf("%d", &a[i]);
	for(i=1;i<=4;i++){
		
		for(j=i+1;j<=5;j++) {
			if(a[i]>a[j]){

				t=a[i]; a[i]=a[j];
			}
		}
	}

	for(i=1;i<=5;i++)
		printf("%d\n",a[i] );
	return 0;
}