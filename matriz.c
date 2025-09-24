#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,ordenFilaA, ordenColumnaA, ordenFilaB, ordenColumnaB;
	double **B,aux;
	double **A;
		printf("Introduzca el numero de filas PARA LA MATRIZ A:\n");
		scanf("%d",&ordenFilaA);
		printf("Introduzca el numero de columnas PARA LA MATRIZ A:\n");
		scanf("%d",&ordenColumnaA);
		A=(double**)malloc(ordenFilaA*sizeof(double*));
		
		
		printf("Introduzca el numero de filas PARA LA MATRIZ B:\n");
		scanf("%d",&ordenFilaB);
		printf("Introduzca el numero de columnas PARA LA MATRIZ B:\n");
		scanf("%d",&ordenColumnaB);
		B=(double**)malloc(ordenFilaB*sizeof(double*));
		
		for(i=0; i<ordenFilaA; i++){
			A[i]=(double*)malloc(ordenColumnaA*sizeof(double));
		}
		
		for(i=0; i<ordenFilaB; i++){
			B[i]=(double*)malloc(ordenColumnaB*sizeof(double));
		}
		
		
	if(ordenColumnaA != ordenFilaB){
		return 1;
	}
		
	for(i=0;i<ordenFilaA;i++){
		for(j=0;j<ordenColumnaA;j++){
		printf("La entrada %d, %d es \t",i+1,j+1);
		scanf("%lf",&aux);
	       printf("%lf \n",aux);
	A[i][j]=aux;
	}
	}
	
	
	for(i=0;i<ordenFilaB;i++){
		for(j=0;j<ordenColumnaB;j++){
		printf("La entrada %d, %d es \t",i+1,j+1);
		scanf("%lf",&aux);
	       printf("%lf \n",aux);
	B[i][j]=aux;}
	}
	
	
	// MATRIZ DE A + B
	
	for(i=0; i<ordenFilaA && ordenFilaB; i++;){
		for(i=0; j<ordenColumnaB && ordenColumnaB: i++){
			int C[i] = ordenFilaA + ordenColumnaB;
			
		}
	}
	
	}	
	
		printf("Su matriz es:\n");
		for(i=0;i<ordenFilaA;i++){
		  printf("\n");
		  for(j=0;j<ordenFilaA;j++)
		    printf("%lf \t",B[i][j]);
		}
		  printf("\n");
	
	
		for(i=0;i<ordenFilaA;i++)
		free(B[i]);
		
		free(B);
	return 0;
}

