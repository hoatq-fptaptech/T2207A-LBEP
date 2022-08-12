#include<stdio.h>
int main(){
	int a,b,c;
	do{
		printf("Nhap a=");
		scanf("%d",&a);
		printf("Nhap b=");
		scanf("%d",&b);
		printf("Nhap c=");
		scanf("%d",&c);
	}while( !(a+b>c&&a+c>b&&b+c>a));
	// mong muon la a b c vua nhap la 3 canh tam giac
}
