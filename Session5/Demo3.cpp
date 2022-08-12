#include<stdio.h>
int main(){
	int x = 10;
	
	if(x > 5){
		int y = x + 20;
		x = x-y;
	}else{
		int y = x+50;
	}
	if(x>6){
		int y = x +55;
	}
	printf("x = %d ",x);
	
	int i=0;
	while(i<10){
		printf("Hello world!\n");
		i++;
	}
	int j=0;
	while(j<10){
		printf("Hello world!\n");
		j++;
	}
	
	for(int k=0 ;k<10 ;k++){
		printf("For:... Hello world!\n");
	}
	for(int k=0 ;k<10 ;k++){
		printf("For:... Hello world!\n");
	}
	for(int k=0 ;k<10 ;k++){
		printf("For:... Hello world!\n");
	}
	for(int k=0 ;k<10 ;k++){
		printf("For:... Hello world!\n");
	}
}
