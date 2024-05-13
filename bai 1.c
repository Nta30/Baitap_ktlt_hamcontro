// Viet ham tinh ucln(a,b), ap dung ham tren de tinh ucln cua 1 day so nguyen
#include<stdio.h>
 int gcd(int a,int b);
 int gcd_arr(int a[], int n);
 void nhapmang(int a[], int n);
 int main(){
 	int a,b,ucln;
 	printf("Nhap vao 2 so a va b:");
 	scanf("%d%d",&a,&b);
 	ucln=gcd(a,b);
 	printf("UCLN cua %d va %d la:%d\n",a,b,ucln);
	int i,n;
	printf("So phan tu can nhap:");
	scanf("%d",&n);
	int c[n];
	printf("Moi nhap vao mang:");
	nhapmang(c,n);
	ucln=gcd_arr(c,n);
	printf("%d",ucln); 
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
 
