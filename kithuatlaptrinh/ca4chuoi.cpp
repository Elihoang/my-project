#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void chuanhoa(char a[]){
	a[0]=toupper(a[0]);
	for(int i=1;i<strlen(a);i++){
		a[i]=tolower(a[i]);
	}
}
int main(){
	char a[1000],b[20][50];
	int n=0;
	gets(a);
	char *token=strtok(a," ");
	while(token!=NULL){
		strcpy(b[n],token);
		++n;
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++){
		chuanhoa(b[i]);
		printf("%s ",b[i]);
	}printf("\n");
	}
