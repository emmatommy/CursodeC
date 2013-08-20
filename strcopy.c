#include<stdio.h>

int main(){
char origi[20],final[20];
int n,i,a=0;

printf("Dame un frase:\n");
gets(origi);

n=strlen(origi);
for(i=0;i<n;i++){
final[a]=origi[i];
a++;
}

printf("\n\nLA COPIA ES:\n");
for(i=0;i<n;i++){
printf("%c",final[i]);
}

return 0;
}