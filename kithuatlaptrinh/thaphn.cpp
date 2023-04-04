#include<stdio.h>
void thap(int n,char a,char b,char c)
{
	if(n==1){
	printf("\n%c---->%c",a,b);
	return ;
	//chuyen  n dia tu a sang b
}
//n dia chuyen tu a sang b;

//dung b lm chung gian chuyen n-1 dia sang c
   thap(n-1,a,c,b);
//chuyen dia lon nhat tu a sang b ,c lm chung gian
   thap(1,a,b,c);
// chuyen n-1 dia tu c sang b,a chung gian
   thap(n-1,c,b,a);
	
}
int main(){
	char a='1',b='2',c='3';
	int n;
	printf("nhap so dia ");
	scanf("%d",&n);
	thap(n,a,b,c);
}
