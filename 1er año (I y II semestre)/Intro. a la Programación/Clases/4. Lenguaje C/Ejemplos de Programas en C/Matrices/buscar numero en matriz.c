#include <stdio.h>
#define max 100
int matriz[max][max];
int i,j,n,m,x,cont;

main()
{
printf(" Ingrese la  cantidad de filas de la matriz  :");
scanf("%d",&n);
printf(" Ingrese la  cantidad de columnas de la matriz  :");
scanf("%d",&m);
printf("\n");
for (i=0;i<n;i++)
	for (j=0;j<m;j++)
	{
	printf("Ingrese el valor de la matriz:");
	scanf("%d",&matriz[i][j]);
	}
cont=0;
printf(" \n Ingrese el numero a buscar  :");
scanf("%d",&x);

for (i=0;i<n;i++)
    {
	for (j=0;j<m;j++)
	{
    if (x==matriz[i][j])
        cont=cont+1;
    };
    }
printf("\n El numero %d se encuentra %d veces.",x,cont);
}
