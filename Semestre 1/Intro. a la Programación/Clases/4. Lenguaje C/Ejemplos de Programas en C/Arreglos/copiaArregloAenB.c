#include <stdio.h>
int i;
int A[10],B[10];

main()
{
for (i=0;i<10;i++)// lee arreglo A
  {
  scanf("%d",&A[i]);
  }

for (i=0;i<10;i++) // copia arreglo A en B en forma inversa
{
B[i]=A[9-i];
}

for (i=0;i<10;i++) // imprime arreglo B
{
printf("%d ",B[i]);
}

}
