#include<stdio.h>
#include<string.h>

int main(){
int i=0,n;
	printf("""Programa que comprueba; dado un angulo si este existe o no entre las manecillas de minutos y horas""\n\n");
	printf("\nCuantos datos deseas probar?:\n");
	scanf("%d",&n);
	int A[n];
	printf("Dame los grados que deseas comprobar:\n");
	do{ scanf("%d",&A[i]);
		if(A[i]>=0 && A[i]<=180){
		
		}else{
		while(A[i]>180 || A[i]<0){
		printf("Ingresa solo numeros entre 0 y 180:\n");
		scanf("%d",&A[i]);}
		}
		i++;
	}while(i<n);
		
		printf("\nLA SALIDA ES: Y=si N=no:\n");
	for(i=0;i<n;i++){
	if(A[i]%6==0){
	    printf("\nY\n"); 
	}
	else{
		    printf("\nN\n"); 
	}
	
	}
	
	





return 0;
}