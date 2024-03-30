/**
  Viet ham kiem tra 1 day so thuc da duoc sap xep hay chua 
  Neu sap xep giam dan thi tra ve -1
  Neu sap xep tang dan thi tra ve 1
  Neu chua sap xep thi tra ve 0
**/
#include<stdio.h>
 void Nhap(float a[], int n);
 int check_tang(float a[], int n);
 int check_giam(float a[], int n);
 int main(){
 	int n,count=0;
 	scanf("%d",&n);
 	float a[n];
 	Nhap(a,n);
 	if(check_tang(a,n)==1){
 		printf("1");
	 }
	if(check_giam(a,n)==-1){
		printf("-1");
	}
	if(check_tang(a,n)==0&&check_giam(a,n)==0){
		printf("0");
	}
 }
 void Nhap(float a[], int n){
 	int i;
 	for(i=0;i<n;i++){
 		scanf("%f",&a[i]);
	 }
 }
 int check_tang(float a[], int n){
 	int i,j;
 	for(i=0;i<n-1;i++){
 		for(j=i+1;j<n;j++){
 			if(a[i]>a[j]){
 				return 0;
			 }
		 }
	 }
	 return 1;
 }
 int check_giam(float a[], int n){
 	int i,j;
 	for(i=0;i<n-1;i++){
 		for(j=i+1;j<n;j++){
 			if(a[i]<a[j]){
 				return 0;
			 }
		 }
	 }
	 return -1;
 }
