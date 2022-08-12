#include<stdio.h>
int main(){
	int n;
	printf("Vui long nhap gia tri muon su dung:");
	scanf("%d",&n);
	int n2;
	n2 = 0;
	while(n!=0){
		// dung thi viet vao day
		n2 = n2*10 + n%10;
		n/=10;
	}

	// sai thi ra day ma viet
	printf("So dao nguoc tim thay la: %d",n2);
	
}
