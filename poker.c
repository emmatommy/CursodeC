#include<stdio.h>


int main(){
int n,i=0,j=0,x,A,C,B,k=0;
			printf("\t\t\t\tPOKER DEL REY\n\n");

	printf("Dame numeros de manos:\n");
	scanf("%d",&n);
int a[n][3];
	printf("\nDame los valores de cada mano:\n");
	for(i=0;i<n;i++){
		for(j=0;j<3;j++)
		{
		scanf("%d",&x);
		a[i][j]=x;
		if(a[i][j]>=0 && a[i][j]<=13){
		
		}else{
		while(a[i][j]<0 || a[i][j]>13){
		printf("Ingresa solo numeros entre 0 y 13:\n");
		scanf("%d",&x);
		a[i][j]=x;
		}
		}
		
		}
	puts("---");
	}
	
	printf("\nMatriz\n");
for(i=0;i<n;i++){
		for(j=0;j<3;j++)
		{
		printf("%d\t",a[i][j]);
		}
	puts(" ");
	}
	
	puts("---");
	puts("Las manos GANADORAS SON:");
	do{ 
	    A=a[k][0];
		B=a[k][1];
		C=a[k][2];
		if(A==0 && B==0 && C==0 ){return 0;}
	     if(A==B && B==C && A!=13)
		{
			
			A++;
			B++;
			C++;
			if(A==13 && B==13 && C==13){
			printf("\n%d\t%d\t%d\n",A,B,C);
			//printf("\n--1a %d\n",k);
			A=0;B=0;C=0;
			}else{
			printf("\n%d\t%d\t%d\n",A,B,C);
			//printf("\n--1 %d\n",k);
			}
		}
		if(A==B && B==C && A==13){
		 printf("\n*\n");
		
		}
		if(A==B && C!=A)
		{		
			  if(A>C && C!=13)
			  {
					  C++;
					  if(C!=A){
						printf("\n%d\t%d\t%d\n",C,A,B);
						//printf("\n--2 %d\n",k);
						}
						else{
								if(A==13 && B==13 && C==13){
						   C=1;B=1; A=1; 
						   printf("\n%d\t%d\t%d\n",A,C,B);
								//printf("\n--3A %d\n",k);
						   }
								else{
						
									C++;
									printf("\n%d\t%d\t%d\n",A,B,C);
									//printf("\n--3 %d\n",k);
									}
						}
			  }
			  else{
			  if(C>A && C!=13){
			  C++;
			  printf("\n%d\t%d\t%d\n",A,B,C);
			 // printf("\n--4%d\n",k);
			  C=0;
							}
			  }
						if(C>A && C==13)
						{
						C=1;
						 A++;
						 B++;
						 printf("\n%d\t%d\t%d\n",C,A,B);
						 //printf("\n--5 %d\n",k);
						}
		}
		
		if(B==C && A!=B)
		{
			if(B>A && A!=13){
			A++;
				if(A!=B){
				printf("\n%d\t%d\t%d\n",A,B,C);
				//printf("\n--6 %d\n",k);
				}
				else
				{    if(A==13 && B==13 && C==13){
						   C=1;B=1; A=1; 
						   printf("\n%d\t%d\t%d\n",A,C,B);
								//printf("\n--7A %d\n",k);
						   }
						   else{
							A++;
							printf("\n%d\t%d\t%d\n",B,C,A);
							//printf("\n--7 %d\n",k);
							}
				}
			  }
			  else{
			  if(A>B && A!=13){
			  A++;
			  printf("\n%d\t%d\t%d\n",B,C,A);
			 // printf("\n--8 %d\n",k);
			  }
			  }
			  if(A>B && A==13){
			  A=1;
			  B++;
			  C++;
			  printf("\n%d\t%d\t%d\n",A,B,C);
			 // printf("\n--9 %d\n",k);
			  }
		}
		if(A==C && B!=A)
		{
			if(A>B && B!=13){
					B++;
						if(B!=A){
						printf("\n%d\t%d\t%d\n",B,A,C);
						//printf("\n-- 10 %d\n",k);
						}
						else
						{
						   if(A==13 && B==13 && C==13){
						   C=1;B=1; A=1; 
						   printf("\n%d\t%d\t%d\n",A,C,B);
								//printf("\n--11A %d\n",k);
						   }
							else{
								B++;
								printf("\n%d\t%d\t%d\n",A,C,B);
								//printf("\n--11 %d\n",k);
								}
						}
			  }
			  else{ 
			  if(B>A && B!=13){
			  B++;
			  printf("\n%d\t%d\t%d\n",A,C,B);
			  //printf("\n--12 %d\n",k);
			  }
			  }
			  
			  if(B>A && B==13){
			  B=1;
			  A++;
			  C++;
			  printf("\n%d\t%d\t%d\n",B,A,C);
			  //printf("\n--13 %d\n",k);
			  }
		
		}
		if(A!=B && B!=C && A!=C){
		A=1; B=1; C=2;
		printf("\n%d\t%d\t%d\n",A,B,C);
		
		}
		
		
		
		
		
		k++;
		
	
	   }while(k<n);
		
	
	
	
	
	
	



  return 0;
}