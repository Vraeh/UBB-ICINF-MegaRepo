#include <stdio.h>
#define n 5
int arreglo[n];
int j;
main()
{
for (j=0;j<n;j++)
	{
	scanf("%d",&arreglo[j]);
	};
for (j=n-1;j>=0;j--)
	{
	printf("\n %d  ",arreglo[j]);
	}
}
