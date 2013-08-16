#include<stdio.h>
int primo(int prim){
	int y=0,i;
	
	for(i=1;i<=prim;i++){
		
	if(prim%i==0){
		++y;
	}
	}
return y;
}

int main(){
int num1,num,j,x=0,y,z;

	printf("Dame los dos numeros del rango separados por una coma:\n");
	scanf("%d,%d",&num1,&num);

	for(j=num1;j<=num;j++){
		y=primo(j);
		
		if(y==2){
		x++;}
	
   	}
	if(num1==1){
	z=x+1;
	printf("\nHay %d numeros primos de %d hasta %d\n",z,num1,num);
	}else
printf("\nHay %d numeros primos de %d hasta %d\n",x,num1,num);
return 0;
}

