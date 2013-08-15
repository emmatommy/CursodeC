#include<stdio.h>
#include<stdlib.h>
#define p printf
int num,i,fin;
main(){
       p("¿Cual tabla quieres ver? Dame numero: ");
       scanf("%d",&num);
	   p("¿De cuantos terminos quieres la tabla?");
	   scanf("%d",&fin);
       
       for(i=1;i<=fin;i++){
       p("%dX%d=%d\n",num,i,num*(i));}
       
       system("pause");
       return 0;
       }
