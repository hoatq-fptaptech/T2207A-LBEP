#include<stdio.h>
int main(){
	// input n
	int n;
	printf("Nhap n=");
	scanf("%d",&n);

	// S=0	
	int S;
	S=0;
	
	int i;
	i=1;
	
	while(i<n){
		// yes cua loop viet trong nay het
		if(n%i==0){
			// yes cua if
			S = S +i;
			printf("Uoc cua %d la: %d\n",n,i);
		}else{
			// no cua if
		}
		i++;
	}
	// no cua loop viet tai day
	printf("Tong cac uoc: %d",S);
}
