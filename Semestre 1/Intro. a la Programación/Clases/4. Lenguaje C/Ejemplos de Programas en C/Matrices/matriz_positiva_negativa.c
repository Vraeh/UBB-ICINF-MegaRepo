/***************************************************************************************
** NOMBRE: CRISTIAN PONCE CHANDIA
** TAREA NB: DE INTRODUCCION A LA PROGRAMACION
** PROFESOR CHRISTIAN VIDAL
** SEMESTRE 1  2006
**
****************************************************************************************/




#include <stdio.h>
#include <stdlib.h>
#define MAX 200

main(){
        int pos,neg,cer,i,j,n,m;/*DECLARACION DE VARIABLES*/
        float mat[MAX][MAX];/*MATRIZ SOBRE DIMENSIONADA*/
        printf("\n***********************************************\n");
        printf("**                                           **\n");
        printf("**   CUAL VA A SER EL ORDEN DE SU MATRIZ     **\n");/*MSM PARA EL ORDEN*/
        printf("**                                           **\n");
        printf("***********************************************\n");

        printf("INGRESE NUMERO DE FILAS DE LA MATRIZ:");/*NB: DE FILAS*/
        scanf ("%d",&n);
        printf("INGRESE NUMERO DE COLUMNAS DE LA MATRIZ:");/*NB: DE COLUMAS*/
        scanf ("%d",&m);

        printf("\nSU MATRIZ ES DE ORDEN ** %d X %d**\n\n",n,m);/*ORDEN FILAS X COLUMAS*/

        printf("\n***********************************************\n");
        printf("**                                           **\n");
        printf("**   INGRESE LOS ELEMENTOS EN SU POSICIONES  **\n");/*MSM DE INGRESAR ELEM A LA MAT*/
        printf("**                                           **\n");
        printf("***********************************************\n");
        /*INGRESAR VALORES*/
        /*RECORRIDO FILAS */
        for(i=0;i<n;i++){
                /*RECORRIDO COLUMNAS*/
                for(j=0;j<m;j++){



                printf(" ELEMENTO DE POSICION %d X %d :",i,j);
                scanf("%f",&mat[i][j]);

                }
        }
        pos=0;/* CONTADORES DE LOS ELEMENTOS*/
        neg=0;
        cer=0;
        /*RECORRIDO FILAS */
        for(i=0;i<n;i++){
                /*RECORRIDO COLUMNAS*/
                for(j=0;j<m;j++){

                         if(mat[i][j]>0){
                         pos=pos+1;}
                         else if(mat[i][j]<0){
                         neg=neg+1;}
                         else if(mat[i][j]==0){
                         cer=cer+1;}
                }
        }



        printf("\n***********************************************\n");
        printf("**                                           **\n");/*MSM DE LAS CANTI. DE ELEM*/
        printf("** CANTIDAD DE POSITIVOS, NEGATIVOS Y CEROS  **\n");
        printf("**                                           **\n");
        printf("***********************************************\n");

        printf("\n\t\n \t\t%d =POSITIVOS \n\t\t%d =NEGATIVOS \n\t\t%d =CEROS\n\n",pos,neg,cer);

        printf("\n***********************************************\n");
        printf("**                                           **\n");
        printf("**       TIPO DE MATRIZ RESULTANTE           **\n");/* TIPO DE MATRIZ*/
        printf("**                                           **\n");
        printf("***********************************************\n");

        if(pos==neg){
        printf("\nLA MATRIZ ES:************NEUTRA**********\n\n");
        }

        else if(cer==(n*m)){
        printf("\nLA MATRIZ ES:************NULA************\n\n");
        }

        else if(pos>neg){
        printf("\nLA MATRIZ ES:************POSITIVA********\n\n");
        }

        else if(neg>pos){
        printf("\nLA MATRIZ ES:************NEGATIVA********\n\n");

        }
getchar();
getchar();
}

