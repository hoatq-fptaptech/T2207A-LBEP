#include <stdio.h>
int main(){
	int tk=4000;
	int ls=8;
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int y = 0;
	while(y<n){
		int l = tk*ls/100;
		tk += l;
		y++;
	}
	printf("Tong tien tk = %d",tk);
}
