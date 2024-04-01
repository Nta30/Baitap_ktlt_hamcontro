/**
 Viet ham loai bo cac gia tri trung nhau trong day so
 Vd {2,4,5,4,6,2,4,5}-->{2,4,5,6}
 
**/
#include<stdio.h>
#include<stdlib.h>
 void Xoaphantu(int *n,int *arr, int vt);
 void Nhap(int *arr, int n);
 void Xuat(int *arr, int n);
 
 int main(){
 	int n;
 	scanf("%d",&n);
 	int *arr;
 	arr=(int *) malloc(n*sizeof(int));//Cap phat dong(Co the dung calloc)
 	Nhap(arr,n);
 	Xuat(arr,n);
 	int i,j;
 	for(i=0;i<n-1;i++){ 
 		for(j=i+1;j<n;j++){
 			if(arr[i]==arr[j]){
 				Xoaphantu(&n,arr,j);
 				j--;//Sau khi xoa phan tu thi j =j-1 vi vi tri cac so trong mang vua thay doi 
			 }
		 }
	 }
	 printf("\nMang sau khi xoa la:");
	 Xuat(arr,n);
 	 free(arr); 
 	return 0;
 }
 void Nhap(int *arr, int n){
 	int i;
 	for(i=0;i<n;i++){
 		scanf("%d",(arr+i));
	 }
 }
 void Xuat(int *arr, int n){
 	int i;
 	for(i=0;i<n;i++){
 		printf("%d ",*(arr+i));
	 }
 }
 void Xoaphantu(int *n, int *arr, int vt){
 	int i;
 	for(i=vt;i<*n;i++){
 		arr[i]=arr[i+1];
	 }
	 arr = (int *)realloc(arr, *(n - 1) * sizeof(int));//Dieu chinh lai kich thuoc cua mang sau khi xoa 1 phan tu;
	(*n)--;
 }
