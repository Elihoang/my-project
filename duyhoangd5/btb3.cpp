#include <stdio.h>
void chiasok(int n,int k){
    
    for(int i=k;i<n+1;i+=k)
        printf(" %d",i);
}
int main(){
	int n,k;
	printf("nhap n va k");
	scanf("%d%d",&n,&k);
	chiasok(n,k);
}
