#include<stdio.h>

int main(){
 int n,i,a=0,b=1,c;
 printf("Dame el numero de terminos:\n");
 scanf("%d",&n);
 printf("0,1,");
 for(i=0;i<n-2;i++)
 {
 c=a+b;
 printf("%d,",c);
 a=b;
 b=c;
 
 }
 
return 0;
	}