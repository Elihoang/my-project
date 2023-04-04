#include<stdio.h>
#include<string.h>
#include<conio.h>
//void nhapmt(int a[][100],int n,int m){
//	for(int i=0;i<n;i++)
//		for(int j=0;j<m;j++){
//			printf("\nNhap a[%d][%d]",i,j);
//			scanf("%d",&a[i][j]);
//		}	
//}
//void xuatmt(int a[][100],int n,int m){
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++)
//			printf(" %d ",a[i][j]);
//			printf("\n");
//		}
//}
//char *s1s2(char s1[],char s2[])
int sosanh(char s1[],char s2[]){
	if(strcmp(s1,s2)==0)
   {
     printf("\n%s bang %s", s1,s2);
   } 
   else if(strcmp(s1,s2)>0)
   {
         printf("\n%s lon hon %s", s1,s2);
   } else
        printf("\n%s nho hon %s", s1,s2);

}
int noichuoi(char s1[],char s2[])
{
	int j=0;
	int i;
   for( i = strlen(s1); i<(strlen(s1)+strlen(s2)); i++) {
      s1[i] = s2[j];
      j++;
   }
     
   s1[i] = '\0';
    
   printf("\nKet qua sau khi noi chuoi la:\n");
   printf("%s", s1);
 
}



int main()  
{  
    	char s1[100],s2[100]; 
    	
    	printf("Nhap cuoi s1: ");
    	fflush(stdin); 
        gets(s1);  
		printf("Nhap chuoi s2: ");
    	fflush(stdin); 
        gets(s2);     
        printf("Chuoi vua nhap s1: ");
        puts(s1); 
		printf("Chuoi vua nhap s2: ");
        puts(s2); 
//DO DAI CUA CHUOI   
		int l=strlen(s1);
		printf("chuoi s1 vua nhap co do dai :%d",l);
		int h=strlen(s2);
		printf("\nchuoi s2 vua nhap co do dai :%d",h);
//SOSANH 2 CHUOI;
		sosanh(s1,s2);
		noichuoi(s1,s2);
		
if(strstr(s1,s2)!=NULL)
{
	printf("\nco");
}else 
printf("\nNO");

		
			
}  

