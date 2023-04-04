#include<stdio.h>
#include<string.h>
#include<conio.h>
struct ngaytn{
	int ngay;
	int thang;
	int nam;
};
typedef struct theubao{
   char matb[12];
   char ten[21];
   struct ngaytn ntn;
   char std[11];
   char ltb[5];
   int noimang;
   int ngmang;
}tb; 
void nhapngaytn(ngaytn &y){
	printf("\nnhap ngay ");
	scanf("%d",&y.ngay);
	printf("\nnhap thang ");
	scanf("%d",&y.thang);
	printf("\nnhap nam ");
	scanf("%d",&y.nam);
}
void xuatngaytn(ngaytn y){
	printf("ngay dang ki %d/%d/%d ",y.ngay,y.thang,y.nam);
}
void nhap1tb(tb &t){
	printf("\nNhap ma thue bao : ");
	fflush(stdin);
	gets(t.matb);
	printf("\nNhap ten thue bao : ");
	fflush(stdin);
	gets(t.ten);
	printf("\nNhap so dien thoai : ");
	fflush(stdin);
	gets(t.std);
	nhapngaytn(t.ntn);
	printf("\nNhap loai thue bao ");
	fflush(stdin);
	gets(t.ltb);
	printf("\nThoiiw gian goi noi mang ");
	scanf("%d",&t.noimang);
	printf("\nTHoi gian goi ngoai mang ");
	scanf("%d",&t.ngmang);
}
void xuat1tb(tb t){
//printf("\n---------------------------------"); 
//{
//    printf("MaTB \t TenTB \t SDT \t LOAITB \t NTN \t NOIM \t NGM\n");
//    
//        printf("%s \t %s \t %s \t %s \t %d/%d/%d \t %d \t %d\n", t.matb,t.ten,t.std,t.ltb,xuatngaytn(t.ntn),t.noimang,t.ngmang);
//}
printf("\n---------------------------------"); 
	printf("\nMa TB : ");puts(t.matb);
	printf("ten tb :");puts(t.ten);
	printf("sdt:");puts(t.std);
	printf("loai tb ");puts(t.ltb);
	xuatngaytn(t.ntn);
	printf("\nNthoi gian noi mang :%d ",t.noimang);
	printf("\nthoi gian ngoai mang : %d ",t.ngmang);
	printf("\n---------------------------------"); 
}
void nhapntb(tb a[],int n){
	for(int i=0;i<n;i++){
		nhap1tb(a[i]);
	}
}
void xuatntb(tb a[],int n){
	for(int i=0;i<n;i++){
		xuat1tb(a[i]);
	}
}
void timtentb(tb a[],int n){
	char tim[21];
	printf("\nNHAP TEN THUE BAO CAN TIM :");
	fflush(stdin);
	gets(tim);
	int res=0;
	for(int i=0;i<n;i++){
		if(strcmp(a[i].ten,tim)==0){
			xuat1tb(a[i]);
			res=1;
		}
	}if(res==0){
		printf("ko cos rheu bao nao ");
	}
}
//void themtb(tb a[],int &n){
//	n++;
//	printf("nhap thue bao can them :");
//	for(int i=n;i>n-1;i--){
//		nhap1tb(a[i]);
//	}
//	printf("\ndanh sach tb sau khi them ");
//	xuatntb(a,n);
//}
void sapxepma(tb a[],int n){
	 
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(a[i].matb,a[j].matb)>0)
			{
			tb tam=a[i];
				a[i]=a[j];
				a[j]=tam; 
			} 
		} 
	}
}
int main(){
	tb a[100];
	int n;
	printf("\n NHap so luong thue bao ");
	scanf("%d",&n);
	nhapntb(a,n);
	printf("\nDanh sach cac thue bao: ");
	xuatntb(a,n);
	timtentb(a,n);
//	themtb(a,n);
printf("\nSau khi sawp xep theo ma ;");
	sapxepma(a,n);
	
	xuatntb(a,n);
}
