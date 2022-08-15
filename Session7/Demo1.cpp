#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];

	printf("Nhap 10 so nguyen:");
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	
	int high = ary[0];
	
	for(int i=1;i<n;i++){
		if(ary[i] > high){
			high = ary[i];
		}
	}
	
	printf("Highest: %d\n",high);
	
	int high2 = high;// PHAI CHON 1 GIA TRI THUOC MANG MA KO PHAI MAX
	for(int i=0;i<n;i++){
		if(ary[i] < high){
			high2 = ary[i];
			break;
		}
	}
	if(high2 == high){
		printf("Mang toan so giong nhau\n");
	}else{
		for(int i=0;i<n;i++){
			if(ary[i]> high2 && ary[i]< high){
				high2 = ary[i];
			}
		}
		
		printf("Highest 2: %d\n",high2);
	}
	
	
}
