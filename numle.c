#include<stdio.h>
int cientos(int x,int y,int z){
switch(x){
	case 1: if(y==0 && z==0){
			printf("CIEN\n");			}
			else
			printf("CIENTO ");
			decenas(y,z);
	break;
	case 2:if(y==0 && z==0){
			printf("DOS CIENTOS\n");			}
			else
			printf("\nDOS CIENTOS ");
			decenas(y,z);
	break;
	case 3:if(y==0 && z==0){
			printf("TRES CIENTOS\n");			}
			else
			printf("\nTRES CIENTOS ");
			decenas(y,z);
	break;
	case 4:if(y==0 && z==0){
			printf("CUATRO CIENTOS\n");			}
			else
			printf("\nCUATRO CIENTOS ");
			decenas(y,z);
	break;
	case 5:
			printf("\nQUINIENTOS ");
			
	break;
	default: decenas(y,z);
	break;
		}

}

int decenas(int y, int z){
switch(y){
		case 1:if(z==0){
			printf("DIEZ\n");			}
			
			else if(z==1){printf("ONCE");}
			else if(z==2){printf("DOCE");}
			else if(z==3){printf("TRECE");}
			else if(z==4){printf("CATORCE");}
			else if(z==5){printf("QUINCE");}
			else{
			printf("DIECI");
			unidades(z);}
		break;
		case 2:if(z==0){
			printf("VEINTE\n");			}
			else
			printf("VEINTI");
			unidades(z);
		break;
		case 3:if(z==0){
			printf("TREINTA\n");			}
			else
			printf("TREINTA Y");
			unidades(z);
		break;
		case 4:if(z==0){
			printf("CUARENTA\n");			}
			else
			printf("CUARENTA Y");
			unidades(z);
		break;
		case 5:if(z==0){
			printf("CINCUENTA\n");			}
			else
			printf("CINCUENTA Y ");
			unidades(z);
		break;
		case 6:if(z==0){
			printf("SESENTA\n");			}
			else
			printf("SESENTA Y ");
			unidades(z);
		break;
		case 7:if(z==0){
			printf("SETENTA\n");			}
			else
			printf("SETENTA Y");
			unidades(z);
		break;
		case 8:if(z==0){
			printf("OCHENTA\n");			}
			else
			printf("OCHENTA Y ");
			unidades(z);
		break;
		case 9:if(z==0){
			printf("NOVENTA\n");			}
			else
			printf("NOVENTA Y ");
			unidades(z);
		break;
		
	default: unidades(z);
	break;}


}

int unidades(int z){
switch(z){
		case 6:printf("SEIS");
		break;
		case 7:printf("SIETE");
		break;
		case 8:printf("OCHO");
		break;
		case 9:printf("NUEVE");
		break;
		
	default: printf("\n\n Adios\n");
	break;}



}




int main(){
int num,x,y,z;

	printf("Dame un numero entre 0 y 500:\n");
	scanf("%d",&num);
	if(num>=0 && num<=500){
	x=num/100;
	num=num%100;
	y=num/10;
	num=num%10;
	z=num;
	cientos(x,y,z);
	}
	else printf("\nNumero fuera de rango\n");
	
	return 0;
	}

