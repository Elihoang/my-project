#include<stdio.h>
void nhapmt(int a[][100],int n,int m){
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			printf("\nNhap a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}	
}
void xuatmt(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			printf(" %d ",a[i][j]);
			printf("\n");
		}
}
int tongc(int a[][100],int n,int m){
	int s=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]%2==0){
				s+=a[i][j];
			}
		}
	}return s;
}
void xuatdong(int a[][100],int n,int m){
	int dong;
	printf("\nnhap donmg");
	scanf("%d",&dong);s
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if()
}
int main(){
	int n,m;
	int a[100][100];
	printf("\nnhap dong :");
	scanf("%d",&n);
	printf("\nnhap coyt");
	scanf("%d",&m);
	nhapmt(a,n,m);
	xuatmt(a,n,m);
	printf("\ntong chan %d",tongc(a,n,m));
}
