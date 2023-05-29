#include <stdio.h>
#define max 20
int matriz[max][max];
int i,j,n,m;

main()
{
printf("Ingrese la  cantidad de filas de la matriz  :");
scanf("%d",&n);
printf(" Ingrese la  cantidad de columnas de la matriz  :");
scanf("%d",&m);
printf("\n");
for (i=0;i<n;i++)
	{
	for (j=0;j<m;j++)
	    {
	    printf("Ingrese el valor de la matriz:");
	    scanf("%d",&matriz[i][j]);
	    };
	};
printf("\n");
for (i=0;i<n;i++)
	{
	for (j=0;j<m;j++)
	    {
	    printf("%d   ",matriz[i][j]);
	    };
    printf("\n");
	};
printf("\n");
for (i=0;i<n;i++)
	{
	for (j=0;j<m;j++)
	    {
	    printf("%d   ",matriz[j][i]);
	    };
    printf("\n");
	};
};
