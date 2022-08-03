#include <stdio.h>
int main(){
	// input num
	int num;
	printf("Nhap num=");
	scanf("%d",&num);
	
	int r;
	r = num % 2;// mod: chia lay du -> %
	
	if(r == 0){ // so sanh =
		// yes
		printf("%d is even",num);
	}else{
		//no
		printf("%d is odd",num);
	}
	
	
}
