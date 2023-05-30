#include <stdio.h>
#define max 10
int matriz[max][max];
int i,j,n,m;

main()
{
int i,j,n,m;
printf(" Ingrese la  cantidad de filas de la matriz  :");
scanf("%d",&n);
printf(" Ingrese la  cantidad de filas de la matriz  :");
scanf("%d",&m);

for (i=0;i<n;i++)
	for (j=0;j<m;j++)
	{
	scanf("%d",&matriz[i][j]);
	}
printf (" \n ... Matriz Normal   ...");
for(i=0;i<n;i++)
    {
    printf(" \n ");
    for(j=0;j<m;j++)
    {
    printf("%d  ", matriz[i][j]);
    }

  }

printf (" \n ... Matriz al reves   ...");
for (i=n-1;i>=0;i--)
    {
	printf(" \n");
	for (j=m-1;j>=0;j--)
	{
	printf("%d  ",matriz[j][i]);
	}
    };

}
