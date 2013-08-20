#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char cadena[100];
int tamano=0,x;
printf("Dame una cadena de caracteres:\n");
gets(cadena);


x=strlen(cadena);
printf("\n EL LARGO2 DE LA CADENA ES DE %d CARACTERES\n",x);

/* OTRA MANERA*/
while(cadena[tamano]!='\0')
{
tamano++;
}
printf("\n EL LARGO DE LA CADENA ES DE %d CARACTERES\n",tamano);



return 0;
			}												