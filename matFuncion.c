#include<stdio.h>
#include<stdlib.h>
#define R 6
#define C 6

void rellenar(int [][C]);//Se le debe indicar siempre el numero de columnas
void imprimir(int [][C]);

void main(){
 int  a[R][C]={0};

rellenar(a);
imprimir(a);


} 

void rellenar(int a[R][C]){
	int i,j;
	srand(time(NULL));//genera numeros aleatorios tomandola hora del equipo
	for(i=0;i<R;i++){
		for(j=0;j<C;j++)
		a[i][j]=rand() % 10; //genera numero psudoaleatorios
	}


}
void imprimir(int a [R][C]){
	int i,j;

	for(i=0;i<R;i++){
		for(j=0;j<C;j++)
			printf("%d\t",a[i][j]);
		puts("");
			}
	}