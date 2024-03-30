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
 	scanf("%d%d",&a,&b);
 	printf("%d",lcm(a,b));
	char x;
	 printf("\nBan co muon tim Bcnn cua 1 day so khong ( y or n ): ");
	 scanf(" %c",&x);
	 if(x=='y'){
	 	int i,n;
	 	scanf("%d",&n);
	 	int a[n];
	 	Nhap(a,n);
	 	printf("%d",lcm_arr(a,n));
	 }
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
