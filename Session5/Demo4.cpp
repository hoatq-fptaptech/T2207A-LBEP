#include<stdio.h>
int main(){
	int n;// yc nguoi dung nhap 1 thang trong nam (1 -> 12)
	do{
		printf("Nhap n=");
		scanf("%d",&n);
	}while(n>12 || n<1);
	
	printf("thang vua nhap la %d",n);
	// viet chuong trinh yeu cau nguoi dung nhap vao 
	/// dung 3 gia tri la 3 canh cua 1 tam giac
}
