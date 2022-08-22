#include <stdio.h>
#include <string.h>
void uppercase(char s1[]){
	for(int i=0;i< strlen(s1);i++){
		if(s1[i]>=97 && s1[i]<=122){
			s1[i] = s1[i] - 32;
		}
	}
}
int main(){
	char s1[100];
	printf("NHap chuoi 1:\n");
	scanf("%s",s1); 
	uppercase(s1);
	
	printf("Chuoi sau khi bien doi: %s",s1);
}
