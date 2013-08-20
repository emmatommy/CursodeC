/*PALINDROMOS VERIFICACION*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
char palin[50],palin2[50];
int n,x,i,a=0,b=0,c=0;
char carac=' ';

printf("Dame Frase de posible palindromo:\n");
gets(palin);
n=strlen(palin);
for(i=0;i<=n;i++){
if(palin[i]==carac)
i++;
palin2[c]=palin[i];
c++;
}
n=strlen(palin2);
for(x=n-1;x>=0;x--){

if(palin2[x]==palin2[a])
b++;
a++;
}
if(b==n){
printf("\nES UN PALINDROMO\n");
}
else
printf("NO NO ES UN PALINDROMO");

return 0;
}