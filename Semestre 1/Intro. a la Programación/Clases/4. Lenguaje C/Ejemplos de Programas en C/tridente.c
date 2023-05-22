#include<stdio.h>
int i, suma=0, p=80;
float promedio=1, tridente;


main(){
printf("ingrese la cantidad de valores del arreglo \n");
scanf("%d",&p);
int arregloA[p];
printf("ingrese %d valores para el arreglo \n",p);

for(i=0;i<p;i++){
    scanf("%d",&arregloA[i]);
    suma=suma+arregloA[i];
    }
promedio=suma/p;
suma=0;
for(i=0; i<p; i++){
    suma=suma+(arregloA[i]*promedio);
    }
tridente=suma;
printf("el resultado de la operación tridente es:\n %.2f",tridente);
}
