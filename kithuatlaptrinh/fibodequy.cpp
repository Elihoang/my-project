#include<stdio.h>
int fibo(int n)
{
	if(n==1||n==2) return 1 ;
	   
	return fibo(n-2)+fibo(n-1); 
 } 
 int main(){
 	int n;
	printf("nhap n ");
 	scanf("%d",&n);
 	printf("\ngia tri cua so thu %d trong day fibo la %d",n,fibo(n));
 	printf("\nday so fibo den so %d ",n);
 	for(int i=1;i<=n;i++)
 	{
 		printf("%d ",fibo(i));
	 }
 }
