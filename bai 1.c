// Viet ham tinh ucln(a,b), ap dung ham tren de tinh ucln cua 1 day so nguyen
#include<stdio.h>
 int gcd(int a,int b);
 int gcd_arr(int a[], int n);
 void nhapmang(int a[], int n);
 int main(){
 	int a,b,ucln;
 	scanf("%d%d",&a,&b);
 	ucln=gcd(a,b);
 	printf("%d",ucln);
 	char x;
	printf("\nBan co muon tinh ucln cua 1 day hay khong(y or n): ");
	scanf(" %c",&x);
	if(x=='y'){
		int i,n;
		printf("So phan tu can nhap:");
		scanf("%d",&n);
		int a[n];
		printf("Moi nhap vao mang:");
		nhapmang(a,n);
		ucln=gcd_arr(a,n);
		printf("%d",ucln);
	}  
 }
 
 void nhapmang(int a[], int n){
 	int i;
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
 }
  
 int gcd(int a,int b){
 	int temp;
 	while(b!=0){
 			temp=b;
			b=a%b;
 			a=temp;	 
	 } 
	 return a;
 }
 
 int gcd_arr(int a[], int n){
 	int i,result=a[0];
 	for(i=1;i<n;i++){
 		result=gcd(result,a[i]);
	 }
	 return result;
 }
 
