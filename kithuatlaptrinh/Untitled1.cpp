#include <stdio.h>
#include<math.h> 
//    0 Dat trong cay lau nam
//    1 Dat tho cu
//    2 Dat nong nghiep khac
void nhapmt(int a[][100],int n){
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            do{
				printf("Nhap loai dat ");
				scanf("%d",&a[i][j]);
				if(a[i][j]>2||a[i][j]<0)
					printf("Nhap sai\n");
            }while(a[i][j]>2||a[i][j]<0);
        }
    }
}

void xuatmt(int a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("   %d   ", a[i][j]);
		}
		printf("\n");
	}
}

int dientichxay(int a[][100],int n){
    int l=0;
    int r=n*n;
    int res= 0;//luu ki luc 
    // t�m theo dau ma tran so voi cuoi ma tran  
    while(l<=r){
    	// chia doi ma tran  
        int mid=(l+r)/2;
        int flag=0;//danh dau 
        for(int i=0;i<=n-mid;i++){
            for(int j=0;j<=n-mid;j++){
                int dat=1;
                //cho a2 vong for chay duyet mang :phan tu khac 1 trong ma tran th� cho bi�n danh dau thanh 0 v� ket thuc; 
                for(int h=i;h<i+mid;h++){
                    for(int k=j;k<j+mid;k++){
                        if(a[h][k]!=1)
						{
                            dat=0;
                            break;
                        }
                    }
                    if(dat==0)
					break;
                }
                if(dat==1)  
                    {
					res=mid;
                    flag=1;
                    break;
                }
            }
            if(flag==1) 
			break;
        }
        //bien d�i gai tri bien luu flag 
        //flag =1 con tro legft va right c�ng len 
        if (flag==1) 
		l=mid+1;
        else 
		r=mid-1;
    }
    return res*res;
}

int main() {
    int a[100][100],n;
    printf("nhap dien tich vuon ");
    scanf("%d",&n); 
    nhapmt(a,n);
    printf("\nmanh vuon\n");
    xuatmt(a,n);
    printf("dien tich vuong lon nhat xay nha la: %d",dientichxay(a,n));
    return 0;
}
