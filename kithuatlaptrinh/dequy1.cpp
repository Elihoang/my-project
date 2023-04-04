#include<stdio.h>
void nhapmang(int a[],int n){
	if(n==0)
	return;
	nhapmang(a,n-1);
	printf("\nphan tu nhap %d ",n-1);
	scanf("%d",&a[n-1]);
}
void xuatmang(int a[],int n){
	if(n==0)
	return;
	xuatmang(a,n-1);
	printf(" %d ",a[n-1]);

}
int tongmang(int a[],int n){
	if(n==0)
	return 0;
	int s;
	s=tongmang(a,n-1);
	s += a[n-1];
	return s;
}
int tongchan(int a[],int n){
	if(n==0)
	return 0;
	int s=tongchan(a,n-1);
	if(a[n-1]%2==0)
	s +=a[n-1];
	return s;	
}
int demduong(int a[],int n){
	if(n==0)
	return 0;
	int cnt=demduong(a,n-1);//dem tu a0----an-2
	if(a[n-1]>0)
	cnt++;
	return cnt;
}
int maxx(int a[],int n){
	if(n==1)
	return a[0];
	int max=maxx(a,n-1);
	if(a[n-1]>max)
	max=a[n-1];
	return max;
}
int minn(int a[],int n){
	if(n==1)
	return a[0];
	int min=minn(a,n-1);
	if(a[n-1]<min)
	min=a[n-1];
	return min;
}
int chancuoi(int a[],int n){
	if(n==0)
	return -1;
	int c=chancuoi(a,n-1);
	if(a[n-1]%2==0)
	c=a[n-1];
	return c;
}
int vitrcuoi(int a[],int n,int k){
	if(n==0)
	return -1;// k cos thi -1;
	int vt=vitrcuoi(a,n-1,k);
	if(a[n-1]==k)
	vt=n-1;
	return vt;
}
int main(){
	int n;
	int a[100];
	scanf("%d",&n);
	nhapmang(a,n);
	printf("\nmang vua nhap ");
	xuatmang(a,n);
	printf("\nMANG VUA NHAP CO TONG LA %d",tongmang(a,n));
	printf("\nMANG VUA NHAP CO TONG CUA CAC SO CHAN LA %d",tongchan(a,n));
	printf("\nMANG VUA NHAP CO  %d PHAN TU DUONG ",demduong(a,n));
	printf("\nMANG VUA NHAP SO LON NHAT LA %d",maxx(a,n));
	printf("\nMANG VUA NHAP SO NHO NHAT LA %d",minn(a,n));
	int res=chancuoi(a,n);
	if(res==-1)
	printf("\nKO COS PHAN TU CHAN");
	else 
	printf("\nPHAN TU CHAN CUOI CUNG CUA MANG LA %d",res);
	int k;
	printf("\nNHAP V TRI TIM ");
	scanf("%d",&k);
	int vtc=vitrcuoi(a,n,k);
	if(vtc==-1)
	printf("\nKO CO VT NAY");
	else
	printf("\nVgia tri %d ow vi tri %d",k,vtc);
	
}
