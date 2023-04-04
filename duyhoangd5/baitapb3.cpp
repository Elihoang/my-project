#include <stdio.h>
#include<math.h> 
void lksonguyen(int );
void lksole(int );
void lksochan(int );
int tongsonguyen(int );
int tongsole(int );
int sochiak(int );
void lksonguyen(int n){
    for(int i=1;i<=n;i++)
       printf("%d ",i) ;
    }  
 void lksole(int n){
    for(int i=1;i<=n;i+=2)
        printf("%d ",i);	 
    } 
  void lksochan(int n){
    for(int i=2;i<=n;i+=2)
        printf("%d ",i);
	}
  int tongsonguyen(int n){
    int sum=0;
    for(int i=1;i<=n;i++)
          sum+=i;
    return sum;
	}
  int tongsole(int n){
    int sum=0;
    for(int i=1;i<=n;i+=2)
   
    sum+=i;
    return sum;
    }
  
 int main(){
 	int n; 
 	printf(" nhap n ");
    scanf("%d",&n);  
    lksonguyen(n); printf("\n");
    lksole(n);printf("\n");
    lksochan(n); printf("\n") ;
    printf("%d\n",tongsonguyen(n));
    printf("\n%d",tongsole(n));
    
 } 
