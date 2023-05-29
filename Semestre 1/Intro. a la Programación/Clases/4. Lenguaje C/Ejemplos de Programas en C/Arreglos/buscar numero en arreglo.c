#include <stdio.h>
#define max 10
int arreglo[max];
int i,n,x,cont;

main()
{
do {
  printf(" Ingrese el largo del arreglo  :");
 scanf("%d",&n);
} while (n<2);

for (i=0;i<n;i++)
	{
	printf("Ingrese valores al arreglo: ");
	scanf("%d",&arreglo[i]);
	};
cont=0;
printf(" \n Ingrese el numero a buscar  :");
scanf("%d",&x);

for (i=0;i<n;i++)
    {
	if (x==arreglo[i])
        cont=cont+1;
    };

printf("\n El numero %d se encuentra %d veces.",x,cont);
}
