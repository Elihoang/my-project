#include<stdio.h>
void nhap(int a[][100],int n,int m){
	for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++){
	    	printf("nhap a[%d][%d]",i,j);
			scanf("%d",&a[i][j]); 
		} 
} 
void xuat(int a[][100],int n,int m){
	 for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++)
	    	printf(" %d ",a[i][j]);
	    	printf("\n");
			}
		}
void xuat3(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
	
	    for(int j=0;j<m;j++){
		
	    	if(a[i][j]%3!=0){
			
	    		printf("%d ",a[i][j]);}
		
		}
	} 
} 
void xuatcheo(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
	
	    for(int j=0;j<m;j++){
		if(i==j){
			printf("%d ",a[i][j]);}
		} 
	}
}
int main(){
   int a[100][100];
   int m,n;
   printf("nhap dong ");
   scanf("%d",&m);
   scanf("%d",&n); 
   nhap(a,n,m);
   xuat(a,n,m); 
   xuat3(a,n,m); 
   printf("\n") ;
   xuatcheo(a,n,m); 
} 
