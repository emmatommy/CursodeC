#include<stdio.h>
int primo(int prim){
	int y=0,i,x;
	
	for(i=2;i<prim;i++){
		x=prim%i;
	if(x==0){
		y=y++;
	}
}
return y;
}

int main(){

int y,prim;
printf("Dame un numero:\n");
	scanf("%d",&prim);
    y=primo(prim);

	if(y==0)
	printf("el numero %d es un primo",prim);
	else
	printf("el numero %d no es un primo",prim);

return 0;
}