#include <stdio.h>
int main(){
	int tk=4000;
	int ls=8;
	int n;
	printf("Nhap so tien toi thieu muon nhan =");
	scanf("%d",&n);
	int y = 0;
	while(tk<n){
		int l = tk*ls/100;
		tk += l;
		y++;
	}
	printf("So nam can gui = %d",y);
}
