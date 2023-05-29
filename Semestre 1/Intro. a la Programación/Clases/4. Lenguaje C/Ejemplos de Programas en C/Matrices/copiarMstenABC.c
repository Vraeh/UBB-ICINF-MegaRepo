#include <stdio.h>
int mat[3][4],a[4],b[4],c[4];
int i,j;
main()
{
for (i=0;i<3;i++)
	for (j=0;j<4;j++)
	{
	printf("Ingrese el valor de la matriz:");
	scanf("%d",&mat[i][j]);
	}

for (i=0;i<3;i++)
	for (j=0;j<4;j++)
	{
	if (i==0)
        a[j]=mat[i][j];
    else if (i==1)
        b[j]=mat[i][j];
    else if (i==2)
        c[j]=mat[i][j];
	};
printf("\n  El arreglo A");
for (i=0;i<4;i++)
    printf(" %d",a[i]);
printf("\n  El arreglo B");
for (i=0;i<4;i++)
    printf(" %d",b[i]);
printf("\n  El arreglo C");
for (i=0;i<4;i++)
    printf(" %d",c[i]);
}
