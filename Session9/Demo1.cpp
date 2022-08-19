#include <stdio.h>
#include "demo.h"
int main(){
	int x = 10;
	int y = binhPhuong(x);
	printf("Binh phuong: %d\n",y);
	int mang[5] = {4,1,2,5,3};
	int m = timMax(5,mang);
	printf("Max: %d\n",m);
	float t = tbcMang(mang,5);
	thucDonHomNay();
	if(ktSoDuong(x)){
		printf("X la so duong\n");
	}
}
