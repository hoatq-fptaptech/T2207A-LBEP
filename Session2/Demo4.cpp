#include <stdio.h>
int main(){
	int y;
	printf("Nhap y=");
	scanf("%d",&y);
	
	int b;
	printf("nhap b=");
	scanf("%d",&b);
	
	if(y>=10){
		// yes
		if(b>5000000){
			// yes
			printf("Classified as an MVS");
		}else{
			//no
			printf("A Little more effort required");
		}
	}else{
		// no
		printf("A Little more effort required");
	}
	
	
}
