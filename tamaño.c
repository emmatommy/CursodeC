#include<stdio.h>
#include<string.h>
int main(){
int a;
short int b;
long int c;
float d;
char e;

	printf("Dame un numero entero:\n");
	scanf("%d",&a);
	printf("\nEl entero %d tiene un tamano de: %d bytes\n",a,sizeof(a));
	printf("\nDame un numero entero:\n");
	scanf("%d",&b);
	printf("\nEl entero %d tipo (short)tiene un tamano de: %d bytes\n",b,sizeof(b));
	printf("\nDame un numero entero:\n");
	scanf("%d",&c);
	printf("\nEl entero %d tipo (long)tiene un tamano de: %d bytes\n",c,sizeof(c));
	printf("\nDame un numero con decimales:\n");
	scanf("%f",&d);
	printf("\nEl numero %f tipo (float) tiene un tamano de: %d bytes\n",d,sizeof(d));
	printf("\nDame un caracter:\n");
	scanf("%c",&e);
	printf("\nEl caracter %c tipo (char)tiene un tamano de:  %d bytes\n",e,sizeof(e));



return 0;
}
