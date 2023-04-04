#include<stdio.h>
#include<string.h>
#include<conio.h>
struct ngaytn{
	int ngay;
	int thang;
	int nam;
};
typedef struct buukien{
	char mabk[10];
	char tenng[20];
	char tennn[20];
	float trongluong;
	struct ngaytn ng;
	char noidung[40];
	float dongia;
	float giatri; 
}bk;
void nhapngaytn(ngaytn &y){
	printf("\nnhap ngay ");
	scanf("%d",&y.ngay);
	printf("\nnhap thang ");
	scanf("%d",&y.thang);
	printf("\nnhap nam ");
	scanf("%d",&y.nam);
}
void xuatngaytn(ngaytn y){
	printf("\nngay thang nam gui %d/%d/%d ",y.ngay,y.thang,y.nam);
}
void nhap1bk(bk &x){
	printf("\nNhap ma buu kien : ");
	fflush(stdin);
	gets(x.mabk);
	printf("\nNhap ten nguoi gui : ");
	fflush(stdin);
	gets(x.tenng);
	printf("\nNhap ten nguoi nhan : ");
	fflush(stdin);
	gets(x.tennn);
	printf("\nNhap trong luong buu kien : ");
	scanf("%f",&x.trongluong);
    printf("\nNhap ngay thang nam gui :");
    nhapngaytn(x.ng);
    printf("\nNhap noi dung buu kien : ");
    fflush(stdin);
    gets(x.noidung);
    printf("\nNhap don gia buu kien : ");
    scanf("%f",&x.dongia);
}
void xuat1bk(bk x){
	printf("\n---------------------------------"); 
	printf("\nMa buu kien : ");puts(x.mabk);
	printf("Nguoi gui : \n");puts(x.tenng);
	printf("Nguoi nhan : \n");puts(x.tennn);
	printf("\nTRong luong buu kien : %f ",x.trongluong);
	xuatngaytn(x.ng);
	printf("\nNoi dung buu kien : ");puts(x.noidung);
	printf("Don gia gui buu kien : %f \n",x.dongia);
	printf("\n---------------------------------"); 
}
void nhapnbk(bk a[],int n){
	for(int i=0;i<n;i++){
		printf("\nNhap buu kien thu %d",i+1);
		nhap1bk(a[i]);
	}
}
void xuatnbk(bk a[],int n){
	for(int i=0;i<n;i++){
		printf("\nbuu kien thu %d",i+1);
		xuat1bk(a[i]);
	}
}
void thembk(bk a[],int &n){
	printf("\nNhap thong tin buu kien can them : ");
	n++;
	printf("\nTHEM SINH VIEN : ");
		nhap1bk(a[n-1]);
		xuatnbk(a,n);
}

void sapxepma(bk a[],int n){
	bk tam; 
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].mabk>a[j].mabk){
				tam=a[i];
				a[i]=a[j];
				a[j]=tam; 
			} 
		} 
	}		xuatnbk(a,n); 

}
int dembklon(bk a[],int n){
	int cnt=0;
	float max=a[0].trongluong;
	for(int i=1;i<n;i++){
		if(a[i].trongluong>max){
			max=a[i].trongluong;
			cnt++;
		}
	}
	 return cnt;
}
void timkiem(bk a[],int n){
	char h[20];
	printf("\nNhap ten nmguoi gui can tim :");fflush(stdin);
	gets(h);
	for(int i=0;i<n;i++){
		if(strcmp(a[i].tenng,h)==0){
			xuat1bk(a[i]);
		}
	}
}
void bkt4(bk a[],int n){
	int day,m;
	printf("");
	for(int i=0;i<n;i++){
		if((a[i].ng.thang==4) &&(a[i].ng.nam==2014)){
			xuat1bk(a[i]);
		}
	}
}
//void  giabk(bk a[],int n){
//	for(int i=0;i<n;i++){
//		a[i].giatri=a[i].trongluong*a[i].dongia; 
//	
//	printf("gia buu kien :%d",a[i].giatri); }
//} 
int main(){
	bk a[100];
	int n;
	printf("\nNhap so buu kien:"); scanf("%d",&n);
	nhapnbk(a,n);
	printf("\nThong tin buu kien");
	xuatnbk(a,n);
	thembk(a,n);
	printf("\nsap xep buu kien theo max: "); 
	sapxepma(a,n); 
	printf("\nBuu kien cos trong luong lon nhat :%d",dembklon(a,n));
	timkiem(a,n);
	printf("\nbuu kien gui tu 4/2014 :");
	bkt4(a,n);
//	printf("\nGia tri buu kien ");
//	giabk(a,n); 
	
}
