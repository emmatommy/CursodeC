#include<stdio.h>
int primo(int prim){
	int y=0,i;
	
	for(i=1;i<=prim;i++){
		
	if(prim%i==0){
		y++;
	}
	}
return y;
}

int main(){

int y,prim;
printf("Dame un numero:\n");
	scanf("%d",&prim);
    y=primo(prim);

	if(y==2)
    printf("El numero es primo");
	else
    printf("El numero no es primo"); 
	return 0;
	}

