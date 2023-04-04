#include<stdio.h>
#include<string.h>
struct ngaytn {
	int ngay;
	int thang;
	int nam; 
}; 
typedef struct sinhvien{
	char ten[20];
	char ma[20];
	struct ngaytn ntn;
	char gioitinh[5];
	float toan;
	float ly;
    float hoa; 
}sv; 
void nhapntn(ngaytn &t){
	printf("\nNhap ngay ");
	scanf("%d",&t.ngay);
	printf("\nNhap thang ");
	scanf("%d",&t.thang);
	printf("\nNhap nam ");
	scanf("%d",&t.nam);
}
void xuatngaytn(ngaytn t){
	printf("\nngay thang nam gui %d/%d/%d ",t.ngay,t.thang,t.nam);
}
void nhap1sv(sv &x){
	printf("\nNhap ten sinh vien ");fflush(stdin);gets(x.ten);
	printf("\nNhap ma sinh vien ");fflush(stdin);gets(x.ma);
	printf("\nNhap gioi tinh ");fflush(stdin);gets(x.gioitinh);
	nhapntn(x.ntn);
	printf("\nNhap diem toan ");scanf("%f",&x.toan);
	printf("\nNhap diem ly ");scanf("%f",&x.ly);
	printf("\nNhap diem hoa ");scanf("%f",&x.hoa);
}
void xuat1sv(sv x){
	
    printf("\n%s \t %s \t %s \t %0.2f \t %0.2f \t %0.2f \t %0.2f\n", x.ma,x.ten, x.gioitinh, x.toan , x.ly , x.hoa, (x.toan + x.ly + x.hoa)/3);
    xuatngaytn(x.ntn);
}
void nhapnsv(sv a[],int n){
	for(int i=0;i<n;i++){
		nhap1sv(a[i]);
	}
}
void xuatnsv(sv a[],int n){
	printf("MaSV \t TenSV \t GioiTinh \t Toan \t Van \t Anh \t DTB\n");
	for(int i=0;i<n;i++){
		xuat1sv(a[i]);
	}
}
void timma(sv a[],int n){
	char tim[20];
	printf("\nNHpa m sinh vienm acn tim");
	fflush(stdin);gets(tim);
	for(int i=0;i<n;i++){
		if(strcmp(a[i].ma,tim)==0){
			xuat1sv(a[i]);
		}
	}
}
void diemtoan(sv a[],int n){
	float max=a[0].toan;
	int index=0;
	for(int i=1;i<n;i++){
		if(a[i].toan>max){
			max=a[i].toan;
			index=i;
		}
	printf("\nSINH vien vo diem toan cao nhat ");
	 xuat1sv(a[index]);
}
}
int main(){
	sv a[100];
	int n;
	printf("nhap so luong sinh vien");
	scanf("%d",&n);
	nhapnsv(a,n);
	printf("\nTHONG TIN SINH VIEN \n");
	xuatnsv(a,n);
	printf("\nSinh vien can tim ");
	timma(a,n);
	diemtoan(a,n);
	
}
