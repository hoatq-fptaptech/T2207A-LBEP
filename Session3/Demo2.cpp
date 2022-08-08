#include <stdio.h>
int main(){
	int x = 10;
	if(x>=10){
		printf("A");
	}else if(x >= 5){
		printf("B");
	}else if(x > 20){
		printf("C");
	}else{
		printf("D");	
	}
	
	switch(x +2){
		case 1: printf("A");break;
		case 10: printf("B");break;
		case 12: printf("C");break;
		case 15: printf("D");break;
		default: printf("E");break;
	}
	
	if(x > 5){
		printf("AB");
	}else{
		printf("CD");
	}
	
	switch(x>5){
		case true: printf("AB");break;
		case false: printf("CD");break;
	}
}
