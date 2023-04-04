#include<stdio.h>
#include<math.h>
int ucln(int a,int b)
{
	if(a==0) return b;
	return ucln(b%a,a);
}
int bcnn(int a,int b)
{
	if(a==0)  return 0;
	return (a*b)/ucln(a,b);
}
int main(){
	int x,y;
	printf("nhap so thu nhat :");
	scanf("%d",&x);
	printf("nhap so thu hai :");
	scanf("%d",&y);
	int u=ucln(x,y);
	int h=bcnn(x,y);
	printf("uoc chung lon nhat cua %d va %d = %d",x,y,u);
	printf("\nboi chung nho nhat cua %d va %d = %d",x,y,h);
	
}
