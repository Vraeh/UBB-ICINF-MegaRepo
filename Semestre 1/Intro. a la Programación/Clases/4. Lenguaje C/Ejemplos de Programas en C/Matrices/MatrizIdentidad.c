#include<stdio.h>
int i[100][100],n,f,c;
main()
{
  do {
    printf("Ingrese la dimension de matriz cuadrada menor a 100:");
    scanf("%d",&n);
  } while (n<0 || n>100);
  for(f=0;f<n;f++)
  {
    for(c=0;c<n;c++)
    {
       if(f==c){ i[f][c]=1; }
       else    { i[f][c]=0; }
    }
  }

  for(f=0;f<n;f++)
  {
    printf(" \n ");
    for(c=0;c<n;c++)
    {
        printf("%d  ", i[f][c]);
    }
  }
}
