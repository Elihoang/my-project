#include<stdio.h>
#include<string.h>

#include<stdlib.h>

#include<conio.h>
#include<process.h>
struct ngaytn{
	int ngay;
	int thang;
	int nam;
};
typedef struct sinhvien{
	char masv[12];
	char hoten[20];
	char gioitinh;
	struct ngaytn ntn;
	char lop[8];
	float dtb;
}sv;
void nhapngaytn(ngaytn *t){
	printf("\nNhap ngay ");
    scanf("%d",&t->ngay);
    printf("\nNhap thang ");
    scanf("%d",&t->thang);
    printf("\nNhap nam ");
    scanf("%d",&t->nam);
}
void xuatngaytn(ngaytn *t){
	printf("%d/%d/%d",t->ngay,t->thang,t->nam);
}

void nhap1svt(sv *x)
{
	printf("\nNhap ma sinh vien :");fflush(stdin);gets(x->masv);
	printf("\nNhap ten sinh vien :");fflush(stdin);gets(x->hoten);
	printf("\nNhap lop cua sinh vien: ");fflush(stdin);gets(x->lop);
	do{
		printf("nhap gioi tinh :");
		x->gioitinh=getche();
	}while(x->gioitinh!='x' && x->gioitinh!='y');
	
	nhapngaytn(&x->ntn);
	do{
		printf("\nnHAP DIEM TRUNG BINH >=4 :");
   scanf("%f",&x->dtb);
		if(x->dtb<4){
		printf("\nNhap lai diem trung binh:");
		scanf("%f",&x->dtb);}
	}while(x->dtb<4);
}
void xuat1svt(sv *x)
{
	printf("\n% -11s \t %-30s \t",x->masv,x->hoten);
	if(x->gioitinh=='x'){
		printf("nu\t");
	}else 
	    printf("nam\t");
	xuatngaytn(&x->ntn);
	printf("\t %-8s \t %f \n",x->lop,x->dtb);
}
void nhapnsvt(sv *a,int n)
{
	printf("\nNHap danh sach sinh vien \n");
	for(int i=0;i<n;i++){
		printf("\nNhap sinh vien thu %d :",i+1);
		nhap1svt(a+i);
	}
}
void xuatnsvt(sv *a,int n)
{
	printf("\ndanh sach sinh vien \n");
	for(int i=0;i<n;i++){
		xuat1svt(a+i);
	}
}
void xuatbanp(sv *a,int n){
	char ten[20];
	printf("\nnhap ten can tim " );
	fflush(stdin);
	gets(ten);
	for(int i=0;i<n;i++){
		if(strcmp((a+i)->masv,ten)==0)
		{
			xuat1svt(a+i);
		}
	}
}
void xuatit(sv *a,int n)
{
	for(int i=0;i<n;i++)
	{
		if((a+i)->lop[3]=='T' && (a+i)->lop[4]=='H')
	{
     xuat1svt(a+i);
	 }
	}
}

void xuatnu(sv *a,int n)
{
	for(int i=0;i<n;i++)
	{
		if((a+i)->gioitinh=='x' && (a+i)->lop[3]=='T' && (a+i)->lop[4]=='H') 
		{
		xuat1svt(a+i);
		}
	}
}
void xuatten(sv *a,int n){
	char ten1[20];
	printf("\nnhap ten can tim " );
	fflush(stdin);
	gets(ten1);
	for(int i=0;i<n;i++){
		if(strcmp((a+i)->hoten,ten1)==0)
		{
			xuat1svt(a+i);
		}
	}
}
int xuatmaxx(sv *a,int n,char *matim){
	for(int i=0;i<n;i++){
		if(strcmp((a+i)->masv,matim)==0)
		return i;
		return -1;
	}
}
void xuatlop(sv *a,int n){
	char lop1[20];
	printf("\nnhap lop can tim " );
	fflush(stdin);
	gets(lop1);
	for(int i=0;i<n;i++){
		if(strcmp((a+i)->lop,lop1)==0)
		{
			xuat1svt(a+i);
		}
	}
}
int main(){
	sv *a;
	int n;
	char *mssv;
	mssv=(char*)malloc(6*sizeof(char));
	printf("\nNHAP SO LUONG SINH VIEN ");
	scanf("%d",&n);
	while(n<=0){
		if(n<=0) printf("\nnhap lai ");
		scanf("%d",&n);
	}
	//
	a=(sv*) malloc(n*sizeof(sv));
	nhapnsvt(a,n);
	xuatnsvt(a,n);

	xuatbanp(a,n);
	printf("\nsinh vien ngahnh it ");
	xuatit(a,n);
	printf("\nSINH VIEN NU ");
	xuatnu(a,n);
	printf("\nsinh vien tim theo ten ");
	xuatten(a,n);
	printf("\nnhap ma sinh vien can tim ");fflush(stdin);scanf("%s",mssv);
	int res=xuatmaxx(a,n,mssv);
	if(res==-1)
	printf("\nko co sinh vien ");
	else 
	xuat1svt(a+res);
	printf("\nCAC SINH VIEN THUOC LOP ");
	xuatlop(a,n);
	free(mssv);
	free(a);
}
