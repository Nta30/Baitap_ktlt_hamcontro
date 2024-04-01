/**
  Viet ham de ghep 2 day so duoc sap xep tang dan thanh 1 day so cung duoc sap xep tang dan 
  Vd a[]={2,4,6,9} va b[]={1,2,5,9,12}
  -->c[]={1,2,2,4,5,6,9,9,12}
**/
#include<stdio.h>
 void Nhap(int arr[], int n);
 void Xuat(int arr[], int n);
 void Kethopmang(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3);
 int main(){
 	int n1,n2;
 	printf("Mang 1 va 2 co lan luot bao nhieu phan tu:");
 	scanf("%d%d",&n1,&n2);
 	int a[n1],b[n2];
 	int n3=n1+n2;
 	int c[n3];
 	printf("Nhap mang 1:");
 	Nhap(a,n1);
 	printf("Nhap mang 2:");
 	Nhap(b,n2);
 	Kethopmang(a,b,c,n1,n2,n3);
 	printf("Mang sau khi ket hop la:");
 	Xuat(c,n3);
 }
 void Nhap(int arr[], int n){
 	int i;
 	for(i=0;i<n;i++){
 		scanf("%d",&arr[i]);
	 }
 }
 void Xuat(int arr[], int n){
 	int i;
 	for(i=0;i<n;i++){
 		printf("%d ",arr[i]);
	 }
 }
 void Kethopmang(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3){
 	int i=0,j=0,k=0;
 	while(i<n1&&j<n2){
 		if(arr1[i]<arr2[j]){
 			arr3[k++]=arr1[i++];
		 }else{
		 	arr3[k++]=arr2[j++];
		 }
	 }
	while(i<n1){
		arr3[k++]=arr1[i++];
	}
	while(j<n2){
		arr3[k++]=arr2[j++];
	} 
 }
