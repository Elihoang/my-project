#include<stdio.h>
#include<string.h>
#include<conio.h>
struct  ngaytn{
	int ngay;
	int thang;
	int nam; 
}; 
typedef struct sinhvien{
	char masinhvien[12];
	char hoten[30];
	char gioitinh;
	char lop[11];
	struct ngaytn ntn;
	float diemtb; 
}sv; 
void nhapngaytn(ngaytn &x){
	printf("\nnhap ngay ");
	scanf("%d",&x.ngay);
	printf("\nnhap thang ");
	scanf("%d",&x.thang);
	printf("\nnhap nam ");
	scanf("%d",&x.nam);
}
void xuatngaytn(ngaytn x){
	printf("\nngay thang nam sinh %d/%d/%d ",x.ngay,x.thang,x.nam);
}
void nhap1sinhvien(sv &s){
	printf("\nnhap ma sinh vien: ");
	fflush(stdin);
	gets(s.masinhvien);
	printf("\nnhap ho ten sinh vien :");
	fflush(stdin);
	gets(s.hoten);
	printf("\nnhap ngay thang nam cau sinh vien :");nhapngaytn(s.ntn);
	printf("\nnhap nlop ");
	fflush(stdin);
	gets(s.lop);
	do{
		printf("\nxnam ;ynu ");
		s.gioitinh=getche();	
	}while(s.gioitinh!='x' &&s.gioitinh!='y');
	printf("\nnhap diem tb ");
	scanf("%f",&s.diemtb);
}

void nhapnhiusinhvien(sv a[],int n){
	printf("\nnhap danh sach sinh vien ");
	for(int i=0;i<n;i++){
		nhap1sinhvien(a[i]);
		printf("\n---------------------------------------");
	}
}
void xuat1sinhvien(sv s){
	printf("\nmax so sinh vien: " );
	puts(s.masinhvien);
	printf("\nho ten sinh vien : ");puts(s.hoten);
	if(s.gioitinh=='x')
	     printf("\ngioi tinh: nam");
	else 
	     printf("\ngioi tinh: nu");
    xuatngaytn(s.ntn);
	printf("\nlop :");
	puts(s.lop);
	printf("\ndiem trrung binh : %.2f",s.diemtb);
	printf("\n-------------------------------------");
}
void xuatnhiusinhvien(sv a[],int n){
	for(int i=0;i<n;i++){
		printf("\nsinh vien thu %d :",i+1);
		xuat1sinhvien(a[i]);
		printf("\n---------------------------------");
	}
}
//diem trung binh tren 5
void diemtb5(sv a[],int n){
	for(int i=0;i<n;i++){
		if(a[i].diemtb>5){
			xuat1sinhvien(a[i]);
		}
	}printf("\n-------------------------------------");
}
//sinh vien thuoc nganh cntt
void svth(sv a[],int n)
{
	for(int i=0;i<n;i++){
		if(a[i].lop[3]=='T' && a[i].lop[4]=='H'){
			xuat1sinhvien(a[i]); 
		} 
	} printf("\n---------------------------------");
} 
int demnu(sv a[],int n){
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i].gioitinh=='y'){
			cnt++;
		}
	}
	return cnt;
	printf("\n-------------------------------------");
}
void diemtbcao(sv a[],int n){
	float cao=a[0].diemtb;
	int index;
	for(int i=2;i<n;i++){
		if(a[i].diemtb>cao){
			cao=a[i].diemtb;
			index=i;}
	 printf("\nsinh vien co diem cao nhat la : ");
			xuat1sinhvien(a[index]);
		}
		printf("\n--------------------------");
	
}
void them(sv a[],int n){
	n++;
	for(int i=n-1;i>0;i--){
	printf("\nnhap ma sinh vien: ");
	fflush(stdin);
	gets(a[i].masinhvien);
	printf("\nnhap ho ten sinh vien :");
	fflush(stdin);
	gets(a[i].hoten);
	printf("\nnhap ngay thang nam cau sinh vien :");nhapngaytn(a[i].ntn);
	printf("\nnhap nlop ");
	fflush(stdin);
	gets(a[i].lop);
	do{
		printf("\nxnam ;ynu ");
		a[i].gioitinh=getche();	
	}while(a[i].gioitinh!='x' &&a[i].gioitinh!='y');
	printf("\nnhap diem tb ");
	scanf("%f",&a[i].diemtb);
	
	
	xuat1sinhvien(a[i]);
	printf("\n-------------------------------------");
}
}
void xoasinhvien(sv a[],int n){
	char y[12];
	printf("\n nhap mssv can xoa ");
	fflush(stdin);
	gets(y);
	for(int i=0;i<n;i++){
		if(a[i].masinhvien==y){
			a[i]=a[i+1];
		}
	}n--;
}
void sapwxep(sv a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].diemtb>a[j].diemtb){
				sv tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}xuatnhiusinhvien(a,n);
}
int main(){
	sv a[100];
	int n;
	char k[12];
	scanf("%d",&n);
	nhapnhiusinhvien(a,n);
	xuatnhiusinhvien(a,n);
	printf("\ncacs sinh vien cos diem tb treen 5: ");
	diemtb5(a,n);
	printf("\ncac sinh vien thuoc nganh cntt : ");
	svth(a,n);
	printf("\nco tat ca %d sinh vien nu .",demnu(a,n));
	diemtbcao(a,n);
	printf("\nsinh vien duoc thwm vao : ");them(a,n);
	printf("\nsinhvien duoc them vao ow cuoi danh sach:");
	xuatnhiusinhvien(a,n);
	xoasinhvien(a,n);
	xuatnhiusinhvien(a,n);
	printf("\nsapw xep theo diem tb tanwg daan");
	sapwxep(a,n);
	return 0;
}
