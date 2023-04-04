#include <stdio.h>
#include <math.h> 
int tonguoc(int);
int tonguoc(int n){
	int sum=0;
	for(int i=1;i<=n;i++)
	{
	   if(n%i==0) 
	
		sum+=i;
}
		if(sum==n*2)
		
	printf("%d la so hanh phuc",n);
		
else
 	printf("%d ko p nha",n); 
}
	

int main (){
	int n;
	printf("nhap n di :");
	scanf("%d",&n);
	tonguoc(n);
} 
 
