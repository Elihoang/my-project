#include<stdio.h>
void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); 
	} 
 } 
void xuatmang(int a[],int n)
 {
 	for(int i=0;i<n;i++){
 		printf("%d ",a[i]); 
	 } 
  } 
int timtuantu(int a[],int n,int x)
  {
  	
	  
  	for(int i=0;i<n;i++){
  		if(a[i]==x)
  		return i; 
	  }return  -1; 
   } 
int swap(int a,int b){
   	int tam=a;
	   a=b;
	b=tam; 
   } 
int sapxepbud(int a[],int n){
   	for(int i=0;i<n-1;i++) {
   		for(int j=0;j<n-i-1;j++){
   			if(a[j]<a[j+1])
			   swap(a[j],a[j+1]); 
		   } 
	   }
   }
   //theo giam dan 
int timnhiphan(int a[],int n,int x){
   	sapxepbud(a,n);
	   int l=0,r=n-1,mid;
	   while(l<=r){
	   	mid=(l+r/2);
		   if(a[mid]==x) return mid;
		   if(a[mid]<x) r=mid-1;
		   else l=mid-1; 
	   } return -1; 
   } 
int  main(){
  	int n,a[100]; 
  	int x; 
	  scanf("%d",&n);
	  nhapmang(a,n);
	  xuatmang(a,n); 
	  printf("nhap so can tim");
	  scanf("%d",&x); 
//	  if(timtuantu(a,n,x)==-1)
//	  printf("\nko co so %d can tim",x);
//	  else 
//	  printf("\n so can tim %d tai vi tri %d",x,timtuantu(a,n,x));
	  if(timnhiphan(a,n,x)==-1)
	  printf("\nko co so %d can tim",x);
	  else 
	  printf("\n so can tim %d tai vi tri %d",x,timnhiphan(a,n,x));
  } 
