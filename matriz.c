#include <stdio.h>
#include <stdlib.h>


int main()
    {
        // Declaramos las variables 'm' para crear los espacios del VECTOR FILAS, 'n' para los espacios DEL VECTOR COLUMNAS 
        // 'i'
        int i,j,m,n;
        double **B,aux;
            printf("Introduzca el numero de filas:\n");
            scanf("%d",&m);
            printf("Introduzca el numero de columnas:\n");
            scanf("%d",&n);
            B=(double**)malloc(m*sizeof(int*));
            for(i=0;i<m;i++)
            B[i]=(double*)malloc(n*sizeof(int));
            
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            printf("La entrada %d, %d es \t",i+1,j+1);
            scanf("%lf",&aux);
                printf("%lf \n",aux);
        B[i][j]=aux;
        }
        }	

            printf("Su matriz es:\n");
            for(i=0;i<m;i++){
                printf("\n");
            for(j=0;j<n;j++)
                printf("%lf \t",B[i][j]);
            }
                printf("\n");


            for(i=0;i<m;i++)
            free(B[i]);
            
            free(B);
        return 0;
}
