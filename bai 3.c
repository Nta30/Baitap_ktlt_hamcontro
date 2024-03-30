/**
 1 chuoi ky tu duoc goi la chuoi C neu no khong thay doi khi dao nguoc lai
  VD:22022022
  Viet chuong trinh nhap 1 chuoi roi kiem tra xem co phai la Palindrome khong
**/
#include<stdio.h>
#include<string.h>
 int check_Palindrome(char str[]);
 int main(){
 	char str[100];
 	printf("Nhap chuoi:");
 	fgets(str,sizeof(str),stdin);
 	str[strlen(str)-1]='\0';
	if(check_Palindrome(str)==1){
		printf("Day la chuoi Palindrome");
	}else{
		printf("Day khong phai la chuoi Palindrome");
	} 
 }
 int check_Palindrome(char str[]){
 	int i=0,j=strlen(str)-1;
 	char a,b;
 	while(i<j){
 		if(str[i]!=str[j]){
 			return 0;
		 }
		 i++;j--;
	 }
	 return 1;
 } 
