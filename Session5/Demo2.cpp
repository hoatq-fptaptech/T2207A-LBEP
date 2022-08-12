#include<stdio.h>
int main(){
	int x = 10;// global variable
	while(x > 10){
		printf("While...\n");
		x++;
	}
	//x  = 10
	do{
		printf("Do while...");
	}while(x > 10);
}
