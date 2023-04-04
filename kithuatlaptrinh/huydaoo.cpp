#include<stdio.h>
#include<string.h>
#include<conio.h>
struct date
{
	int ngay;
	int thang;
	int nam;
};
typedef struct sinhvien
{
	char masv[20];
	char hoten[31];
	struct date ns;
	char gt;
	char lop[8];
	float dtb;
} sv;
void nhapngaysinh(date &p)
{
	printf("\n nhap vao ngay: ");
	scanf("%d",&p.ngay);
	printf(" nhap vao thang: ");
	scanf("%d",&p.thang);
	printf(" nhap vao nam: ");
	scanf("%d",&p.nam);
}
void xuatngaysinh(date p)
{
	printf("%02d / %02d / %4d ",p.ngay,p.thang,p.nam);
}
void nhap1sv( sv &a)
{
	printf("\n nhap ma sinh vien: "); fflush(stdin); gets(a.masv);
	printf(" nhap ho ten: "); fflush(stdin); gets(a.hoten);
	printf(" nhap ngay thang nam sinh: "); nhapngaysinh(a.ns);
	do{
		printf(" nhap gioi tinh: ");
		a.gt= getche();
	}while(a.gt!='y' && a.gt!='x');
	printf("\n nhap lop: ");  scanf("%s",&a.lop);
	do{
		printf(" nhap diem trung binh: ");
		scanf("%f",&a.dtb);
	}while(a.dtb<=0);
}
void xuat1sinhvien(sv a)
{
	printf("\n ma so sinh vien:"); puts(a.masv);
	printf(" ho ten sinh vien: "); puts(a.hoten);
	printf(" ngay thang nam sinh: ");	xuatngaysinh(a.ns);
	printf("\n gioi tinh: ");
	if(a.gt=='x'){
		printf("nu\t");
	}else{
		printf("nam\t");
	}
	printf("\n nhap lop: %s",a.lop); 
	printf("\n diem trung binh: %.2f ",a.dtb);
}
void nhapds(sv a[], int n)
{
		printf("\n nhap danh sach sinh vien: ");
		for(int i=0; i<n; i++){
				printf("\n nhap sinh vien thu: %d",i+1);
				nhap1sv(a[i]);
		}
}
void xuatds(sv a[], int n)
{
	printf("\n*************************");
	printf("\n danh sach sinh vien: ");
		for( int i=0; i<n; i++){
			xuat1sinhvien(a[i]);
			}
}
void dtb_tren5(sv a[], int n)
{	
	printf("\n************************");
	printf("\n sinh vien co diem trung binh tren 5: ");
	for(int i=0; i<n; i++){
		if(a[i].dtb>5){
			xuat1sinhvien(a[i]);
		}
	}
}
void xuatnganh_it(sv a[], int n)
{	
	printf("\n*************************");
	printf("\n sinh vien hoc cong nghe thong tin");
	for(int i=0; i<n; i++){
		if(a[i].lop[3]=='D' && a[i].lop[4]=='T'){
			xuat1sinhvien(a[i]);
		}
	}
}
int demsv_nu(sv a[], int n)
{
	printf("\n********************** ");
	int dem=0;
	for(int i=0; i<n; i++ ){
		if(a[i].gt=='x'){
			dem++ ;}
	}
	return dem;
}
void xuat_dtb_max(sv a[], int n)
{
	printf("\n *********************\n sv co diem tb lon nhat: ");
	float max = 0;
	int index=0;
	for(int i=0; i<n; i++){
		if(a[i].dtb>max){
			max=a[i].dtb;
			index=i;
		} xuat1sinhvien(a[index]);
	}
}
void themsv_new(sv a[], int &n)
{
	n++;
	printf("\n *****************\n them 1 sinh vien");
	for(int i=n-1; i>0; i--){
		nhap1sv(a[i]);
	}xuatds(a,n);
	
}
void xoa(sv a[],int &n,int x){
	for(int i=x;i<n;i++){
		a[i]=a[i+1];
	}n--;
}
void tim(sv a[],int &n)
{   char ma[20];
    printf("\nNHAP MA CAN TIM :");fflush(stdin);gets(ma);
	for(int i=0;i<n;i++)
	{
		if(strcmp(a[i].masv,ma)==0)
		   xoa(a,n,i);
	}
	xuatds(a,n);
}
void sapxep(sv a[],int n){
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			
			if(a[i].dtb>a[j].dtb)
			{
				sv tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
	xuatds(a,n);
}
int main()
{
	sv a[100];
	int n;
	printf(" nhap n: "); scanf("%d",&n);
	nhapds(a,n);
	xuatds(a,n);
	dtb_tren5(a,n);
	xuatnganh_it(a,n);
	demsv_nu(a,n);
	printf("\n so luong sinh vien nu: %d",demsv_nu(a,n));
	xuat_dtb_max(a,n);
	themsv_new(a,n);
	tim(a,n);
	int x;
	xoa(a,n,x);
	sapxep(a,n);
	return 0;
}
