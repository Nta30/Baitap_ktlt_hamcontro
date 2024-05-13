/** Viet ham tinh bcnn(a,b), ap dung tinh boi chung nho nhat cua 1 day so nguyen
     Biet bcnn(a,b)=(a*b)/ucln(a,b)
**/
#include<stdio.h>
 int ucln(int a, int b);
 int lcm(int a, int b);
 int lcm_arr(int a[], int n);
 void Nhap(int a[], int n );
 int main(){
 	int a,b;
 	printf("Nhap vao 2 so a va b:"); 
 	scanf("%d%d",&a,&b);
 	printf("BCNN cua %d va %d la:%d\n",a,b,lcm(a,b));
	int i,n;
	printf("Nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	int c[n];
	printf("Nhap vao phan tu cua mang (viet so sau do cach):");
	Nhap(c,n);
	printf("BCNN cua mang la:%d",lcm_arr(c,n));
 }
 int ucln(int a, int b){
 	int temp;
 	while(b!=0){
 		temp=b;
 		b=a%b;
 		a=temp;
	 }
	 return a;	 
 }
 int lcm(int a, int b){
 	int bcnn=(a*b)/ucln(a,b);
 	return bcnn;
 }
 void Nhap(int a[], int n){
 	int i;
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
 }
 int lcm_arr(int a[], int n){
 	int i,result=a[0];
 	for(i=1;i<n;i++){
 		result=lcm(result,a[i]);
	 }
	 return result;
 } 
